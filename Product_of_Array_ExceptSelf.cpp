//
// Created by yanchen on 6/6/25.
//

#include <vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums){
    vector<int> result(nums.size(),1);
    int prefix = 1;
    for (int i=0;i<nums.size();i++) {
        result[i] = prefix;
        prefix *= nums[i];
    }
    prefix = 1;
    for (int i=static_cast<int>(nums.size()-1);i>=0;i--) {
        result[i] *= prefix;
        prefix *= nums[i];
    }
    return result;
}