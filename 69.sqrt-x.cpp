/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 *
 * https://leetcode.com/problems/sqrtx/description/
 *
 * algorithms
 * Easy (31.99%)
 * Likes:    868
 * Dislikes: 1492
 * Total Accepted:    409.1K
 * Total Submissions: 1.3M
 * Testcase Example:  '4'
 *
 * Implement int sqrt(int x).
 * 
 * Compute and return the square root of x, where x is guaranteed to be a
 * non-negative integer.
 * 
 * Since the return type is an integer, the decimal digits are truncated and
 * only the integer part of the result is returned.
 * 
 * Example 1:
 * 
 * 
 * Input: 4
 * Output: 2
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: 8
 * Output: 2
 * Explanation: The square root of 8 is 2.82842..., and since 
 * the decimal part is truncated, 2 is returned.
 * 
 * 
 */
class Solution {
public:
    int mySqrt(int x) {
        if(x <= 1) return x;
        int begin = 1;
        int end = 1;
        
        while(1){
            long long value = static_cast<long long>(end) * end;
            
            if(value == static_cast<long long>(x)) return end;

            if(value < static_cast<long long>(x)){
                begin = end;
                end *= 2;
            }
            else break;
        }

        while(1){
            if(begin == end - 1) return begin;

            int mid = (begin + end) / 2;
            long long value = static_cast<long long>(mid) * mid;
            if(value == static_cast<long long>(x)) return mid;
            else if(value < static_cast<long long>(x)) begin = mid;
            else end = mid;
        }

        return begin;
    }
    // √ Accepted
    // √ 1017/1017 cases passed (0 ms)
    // √ Your runtime beats 100 % of cpp submissions
    // √ Your memory usage beats 82.46 % of cpp submissions (8.3 MB)
};

