#include "common.h"
#include <iostream>
#include "tag_vector.h"

using namespace std;

int main() {
	std::vector<int> nums = { 1,2,3,4,3,4,2 };
	cout << singleNumber(nums);
	return 0;  
}