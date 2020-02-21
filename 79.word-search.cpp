/*
 * @lc app=leetcode id=79 lang=cpp
 *
 * [79] Word Search
 *
 * https://leetcode.com/problems/word-search/description/
 *
 * algorithms
 * Medium (32.77%)
 * Likes:    2789
 * Dislikes: 140
 * Total Accepted:    391.9K
 * Total Submissions: 1.2M
 * Testcase Example:  '[["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]]\n"ABCCED"'
 *
 * Given a 2D board and a word, find if the word exists in the grid.
 * 
 * The word can be constructed from letters of sequentially adjacent cell,
 * where "adjacent" cells are those horizontally or vertically neighboring. The
 * same letter cell may not be used more than once.
 * 
 * Example:
 * 
 * 
 * board =
 * [
 * ⁠ ['A','B','C','E'],
 * ⁠ ['S','F','C','S'],
 * ⁠ ['A','D','E','E']
 * ]
 * 
 * Given word = "ABCCED", return true.
 * Given word = "SEE", return true.
 * Given word = "ABCB", return false.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    struct coord {
        coord() { }
        coord(int x, int y) : x(x), y(y) { }
        int x = 0;
        int y = 0;

        friend bool operator< (const coord& lhs, const coord& rhs) {
            if (lhs.x == rhs.x) return lhs.y < rhs.y;

            return lhs.x < rhs.x;
        }
    };
    struct info {
        info() { }
        info(char c, bool m) : c(c), meet(m) { }
        char c = '0';
        bool meet = false;
    };

    void findnextcrd(const coord& crd, char nextchar, std::map<coord, info>& coordinfo, std::vector<coord>& nextcrds) {
        coord nextcrd = coord(crd.x - 1, crd.y);
        auto it = coordinfo.find(nextcrd);
        if (it != coordinfo.end() && coordinfo[nextcrd].meet == false && coordinfo[nextcrd].c == nextchar) {
            nextcrds.push_back(nextcrd);
        }

        nextcrd = coord(crd.x + 1, crd.y);
        it = coordinfo.find(nextcrd);
        if (it != coordinfo.end() && coordinfo[nextcrd].meet == false && coordinfo[nextcrd].c == nextchar) {
            nextcrds.push_back(nextcrd);
        }

        nextcrd = coord(crd.x, crd.y - 1);
        it = coordinfo.find(nextcrd);
        if (it != coordinfo.end() && coordinfo[nextcrd].meet == false && coordinfo[nextcrd].c == nextchar) {
            nextcrds.push_back(nextcrd);
        }

        nextcrd = coord(crd.x, crd.y + 1);
        it = coordinfo.find(nextcrd);
        if (it != coordinfo.end() && coordinfo[nextcrd].meet == false && coordinfo[nextcrd].c == nextchar) {
            nextcrds.push_back(nextcrd);
        }
    }

    bool findpath(char c, const coord& crd, int n, const string& word, std::map<coord, info> coordinfo) {
        if (n == word.size()) return true;

        coordinfo[crd].meet = true;

        std::vector<coord> nextcrds;
        findnextcrd(crd, word[n], coordinfo, nextcrds);
        for (const coord& nextcrd : nextcrds) {
            if (findpath(coordinfo[nextcrd].c, nextcrd, n + 1, word, coordinfo)) {
                cout << nextcrd.x << " " << nextcrd.y << endl;
                return true;
            }
        }

        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        if (word.empty()) return true;

        char c = word.front();

        std::map<coord, info> coordinfo;
        std::vector<coord> begincs;
        for (size_t x = 0; x < board.size(); ++x) {
            for (size_t y = 0; y < board[x].size(); ++y) {
                coordinfo[coord(x,y)] = info(board[x][y], false);

                if (board[x][y] == c) begincs.push_back(coord(x, y));
            }
        }

        for(const auto& crd : begincs){
            if (findpath(c, crd, 1, word, coordinfo)) {
                cout << crd.x << " " << crd.y << endl;
                return true;
            }
            cout << endl;
        }

        return false;
    }

    // vector<vector<char>> board{
	// 	{'a','b','c','d'},
	// 	{'a','b','c','d'},
	// 	{'a','b','c','c'}
	// };

	// bool result = exist(board, "abccdcbbaa");

	// std::cout << result << std::endl;
};
// @lc code=end

