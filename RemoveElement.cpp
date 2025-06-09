//
// Created by yanchen on 6/9/25.
//
#include <vector>
using namespace std;
int removeElement(vector<int>& nums, const int val) {
    int left=0;
    const int length=static_cast<int>(nums.size());
    if (length<1) return length;
    for(int i=0;i<length;i++){
        if(nums[i]!=val){
            nums[left++]=nums[i];
        }
        else continue;
    }
    return left;
}