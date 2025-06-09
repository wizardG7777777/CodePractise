//
// Created by yanchen on 6/9/25.
//
#include <vector>
using namespace std;
bool canJumpI(vector<int>& nums) {
    vector<int> dp(nums.size(),0);
    dp[nums.size()-1]=1;
    for(int i=static_cast<int>(nums.size())-2;i>=0;i--){
        int next = min(nums[i]+i, static_cast<int>(nums.size())-1);
        for(int j=i+1; j<=next;j++){
            if(dp[j]>0){
                dp[i]+=1;
                break;
            }
        }
    }
    if (dp[0]>0) return true;
    else return false;
}