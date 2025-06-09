//
// Created by yanchen on 6/9/25.
//
#include <vector>
using namespace std;
int removeDuplicatesII(vector<int>& nums) {
    const int length = static_cast<int>(nums.size());
    if(length<3) return length;
    int left=1;
    int count=0;
    for(int right=1;right<length;right++){
        if(nums[right]==nums[right-1]) count++;
        else count=0;
        if(count < 2){
            nums[left++]=nums[right];
        }
    }
    return left;
}