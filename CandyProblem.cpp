//
// Created by yanchen on 6/9/25.
//
#include <vector>
using namespace std;
int candy(vector<int>& ratings) {
    const int length = static_cast<int>(ratings.size());
    // forward process
    if (length<2) return 1;
    vector<int> candies(length,1);
    for (int i = 1; i < length; i++)
        if (ratings[i] > ratings[i-1])
            candies[i] = candies[i-1] + 1;
    int total_candies = candies[length-1];
    // backward process
    for (int i=length-2;i>=0;i--) {
        if (ratings[i] > ratings[i+1])
            candies[i] = max(candies[i], candies[i+1]+1);
        total_candies += candies[i];
    }
    return total_candies;
}