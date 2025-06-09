//
// Created by yanchen on 6/9/25.
//
#include <vector>
using namespace std;
int removeDuplicatesI(vector<int>& nums) {
    const int length = static_cast<int>(nums.size());
    if(length < 2) return length;
    int left=1;
    int count=0;
    for (int i=1;i<length;i++){
        if(nums[i]==nums[i-1]) count++;
        else count=0;
        if(count<1){
            nums[left++]=nums[i];
        }
    }
    return left;
}