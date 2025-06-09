//
// Created by yanchen on 6/9/25.
//
#include <vector>
using namespace std;
int canJumpII(vector<int>& nums) {
    int answer = 1;
    int left = 0;
    int right = nums[0];
    if(nums.size()<2) return 0;
    while(right<nums.size()-1){
        int temp=0;
        for(int i=left;i<=right;i++){
            if(i+nums[i]>temp)
                temp=i+nums[i];
        }
        left=right+1;
        right=temp;
        answer++;
    }
    return answer;
}