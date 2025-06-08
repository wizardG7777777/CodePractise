//
// Created by yanchen on 6/6/25.
//
#include <vector>
using namespace std;
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int total_gas = 0;
    int total_cost = 0;
    int start = 0;
    int gas_remain = 0;
    for (int i=0;i<gas.size();i++) {
        total_gas += gas[i];
        total_cost += cost[i];
        gas_remain += gas[i] - cost[i];
        if (gas_remain<0) {
            start = i+1;
            gas_remain = 0;
        }
    }
    if (total_gas<total_cost) return -1;
// Fill the blank with appropriate code with respect to LeetCode Question
    return start;
}