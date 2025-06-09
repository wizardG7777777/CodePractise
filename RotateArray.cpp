//
// Created by yanchen on 6/9/25.
//
// void ABswitch(vector<int>& v, int i, int j){
//     int temp = v[i];
//     v[i] = v[j];
//     v[j] = temp;
//     return ;
//
#include <vector>
using namespace std;
void rotate(vector<int>& nums, int k) {
    if (k==0 || nums.size()<2) return ;
    int start=0, count=0;
    const int length=static_cast<int>(nums.size());
    k = k%length;
    while(count<length){
        int current = start;
        int previous = nums[start];
        do{
            int next = (current+k)%length;
            int temp = nums[next];
            nums[next] = previous;
            previous = temp;
            current=next;
            count++;
        }while(start!=current);
        start++;
    }
}