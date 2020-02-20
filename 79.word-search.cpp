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
        coord(int x, int y): x(x), y(y){}
        int x = 0;
        int y = 0;

        friend bool operator< (const coord& lhs, const coord& rhs) {
            if (lhs.x == rhs.x) return lhs.y < rhs.y; 
            
            return lhs.x < rhs.x;
        }
    };
    bool CheckAdjacent(char cur_c, const coord& crd, char next_c, std::map<char, std::set<coord>>& cxy){
        auto it = cxy.find(next_c);
        if (it == cxy.end()) return false;

        for (const coord& crd2 : it->second) {
            if ((std::abs(crd.x - crd2.x) + std::abs(crd.y - crd2.y) == 1)) {
                cxy[cur_c].erase(crd);
                return true;
            }
        }

        return false;
    }

    bool isAdjacent(char cur_c, string& word, std::map<char, std::set<coord>>& cxy) {
        if (word.empty()) return true;

        char next_c = word.back();
        word.pop_back();

        auto it = cxy.find(cur_c);
        if (it == cxy.end())return false;

        for (const coord& crd : it->second) {
            if (!CheckAdjacent(cur_c, crd, next_c, cxy)) continue;
            return isAdjacent(next_c, word, cxy);
        }

        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        if (word.empty()) return true;

        std::map<char, std::set<coord>> cxy;
        for (size_t x = 0; x < board.size(); ++x) {
            for (size_t y = 0; y < board[x].size(); ++y) {
                cxy[board[x][y]].insert(coord(x, y));
            }
        }

        std::reverse(word.begin(), word.end());
        char c = word.back();
        word.pop_back();
        return isAdjacent(c, word, cxy);
    }
};
// @lc code=end

