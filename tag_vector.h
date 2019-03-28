#pragma once
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target); // 001. Two Sum

bool isValid(std::string s);	// 020. Valid Parentheses

int removeDuplicates(std::vector<int>& nums);	// 026. Remove Duplicates from Sorted Array

int removeElement(std::vector<int>& nums, int val); // 027. Remove Element

int searchInsert(std::vector<int>& nums, int target); // 035. Search Insert Position

int maxSubArray(std::vector<int>& nums); // 053. Maximum Subarray

std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix); // 054. Spiral Matrix 059. Spiral Matrix II

std::string getPermutation(int n, int k); // 060. Permutation Sequence

int uniquePaths(int m, int n); // 062. Unique Paths

int uniquePathsWithObstacles(std::vector<std::vector<int>>& obstacleGrid); // 063. Unique Paths II

int minPathSum(std::vector<std::vector<int>>& grid); // 064. Minimum Path Sum

std::vector<int> plusOne(std::vector<int>& digits); // 066. Plus One

int climbStairs(int n); // 070. Climbing Stairs

std::string simplifyPath(std::string path); // 071. Simplify Path

void setZeroes(std::vector<std::vector<int>> &matrix); // 073. Set Matrix Zeroes

bool searchMatrix(std::vector<std::vector<int>>& matrix, int target); // 074. Search a 2D Matrix

void sortColors(std::vector<int>& nums); // 075. Sort Colors

std::vector<std::vector<int>> combine(int n, int k); // 077. Combinations

std::vector<std::vector<int>> subsets(std::vector<int>& nums); // 078. SubSets

int removeDuplicates2(std::vector<int>& nums); // 080. Remove Duplicates from Sorted Array II

bool search(std::vector<int>& nums, int target); // 081. Search in Rotated Sorted Array II

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n); // 088. Merge Sorted Array

std::vector<std::vector<int>> generate(int numRows); // 118. Pascal's Triangle

std::vector<int> getRow(int rowIndex); // 119. Pascal's Triangle II

int maxProfit(std::vector<int>& prices); // 121. Best Time to Buy and Sell Stock

int maxProfit2(std::vector<int>& prices); // 122. Best Time to Buy and Sell Stock II
int maxProfit2s(std::vector<int>& prices);

int singleNumber(std::vector<int>& nums); // 136. Single Number

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
class MinStack {
	// 155. Min Stack
private:
	std::vector<int> *minStack;
	int min;
public:
	MinStack();
	void push(int x);
	void pop();
	int top();
	int getMin();
};

std::vector<int> twoSum2(std::vector<int>& numbers, int target); // 167. Two Sum II

int majorityElement(std::vector<int>& nums); // 169. Majority Element

void rotate(std::vector<int>& nums, int k);
void rotate1s(std::vector<int>& nums, int k);
void rotate1t(std::vector<int>& nums, int k); // 189. Rotate Array

bool isHappy(int n); // 202. Happy Number

int countPrimes(int n); // 204. Count Primes

bool isIsomorphic(std::string s, std::string t); // 205. Isomorphic Strings

bool containsDuplicate(std::vector<int>& nums); // 217. Contains Duplicate

bool containsNearbyDuplicate(std::vector<int>& nums, int k); // 219. Contains Duplicate II

int missingNumber(std::vector<int>& nums); // 268. Missing Number

void moveZeroes(std::vector<int>& nums); // 283. Move Zeroes

std::vector<int> nextGreaterElement(std::vector<int>& findNums, std::vector<int>& nums); // 496. Next Greater Element I





std::vector<std::vector<int>> generateMatrix(int n);
int calPoints(std::vector<std::string>& ops); // 682. Baseball Game

std::string getRealStr(std::string T);
bool backspaceCompare(std::string S, std::string T); // 844. Backspace String Compare


