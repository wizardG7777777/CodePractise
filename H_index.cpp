//
// Created by yanchen on 6/9/25.
//
#include <vector>
using namespace std;
int hIndex(vector<int>& citations) {
    const int length = static_cast<int>(citations.size());
    vector<int> paper_counts(length+1,0);
    for(auto x : citations){
        paper_counts[min(x,length)] += 1;
    }
    int h_index = length;
    int cit_val = paper_counts[length];
    while(h_index>cit_val && h_index >= 0){
        h_index--;
        cit_val += paper_counts[h_index];
    }
    return h_index;
}