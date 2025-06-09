//
// Created by yanchen on 6/9/25.
//
#include <vector>
#include <algorithm>
using namespace std;
int majorityElement(vector<int>& nums) {
    const int length = static_cast<int>(nums.size());
    if (length<2) return nums[0];
    std::sort(nums.begin(), nums.end());
    return nums[length/2];
}