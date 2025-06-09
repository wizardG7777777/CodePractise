//
// Created by yanchen on 6/9/25.
//
#include <vector>
#include <climits>
using namespace std;
int maxProfitII(vector<int>& prices) {
    int low = INT_MAX;
    int high = -100;
    int answer = 0;
    for (int i=0;i<prices.size();i++){
        if(prices[i]<low){
            low=prices[i];
        }
        else if(prices[i]>low && prices[i]>prices[i-1]){
            answer += prices[i]-low;
            low=prices[i];
        }
        else{
            low=prices[i];
        }
    }

    return answer;
}