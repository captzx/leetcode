/*
 * @lc app=leetcode id=204 lang=cpp
 *
 * [204] Count Primes
 *
 * https://leetcode.com/problems/count-primes/description/
 *
 * algorithms
 * Easy (29.68%)
 * Likes:    1233
 * Dislikes: 437
 * Total Accepted:    262.5K
 * Total Submissions: 883.9K
 * Testcase Example:  '10'
 *
 * Count the number of prime numbers less than a non-negative number, n.
 * 
 * Example:
 * 
 * 
 * Input: 10
 * Output: 4
 * Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
 * 
 * 
 */
class Solution {
public:
    bool isPrime(int n){
        if(n < 2) return false;

        int max_facotr = std::sqrt(n);
        for(int i = 2; i <= max_facotr; ++i){
            if(float(n)/i-(n/i) < 0.000001) return false;
        }

        return true;
    }
    int countPrimes(int n) {
        if(n <= 2) return 0;
        int count = 1;
        for(int i = 3; i < n; i+=2){
            if(isPrime(i)) ++count;
        }
        return count;
    }
    // √ Accepted
    // √ 20/20 cases passed (752 ms)
    // √ Your runtime beats 5.04 % of cpp submissions
    // √ Your memory usage beats 95.83 % of cpp submissions (8.2 MB)
};

