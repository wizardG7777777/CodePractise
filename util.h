//
// Created by yanchen on 6/6/25.
//

#ifndef UTIL_H
#define UTIL_H
#include <vector>
#include <string>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);
int removeElement(vector<int>& nums, int val);
int removeDuplicatesI(vector<int>& nums);
int removeDuplicatesII(vector<int>& nums);
int majorityElement(vector<int>& nums);
void rotate(vector<int>& nums, int k);
int maxProfitI(vector<int>& prices);
int maxProfitII(vector<int>& prices);
bool canJumpI(vector<int>& nums);
int canJumpII(vector<int>& nums);
int hIndex(vector<int>& citations);
vector<int> productExceptSelf(vector<int>& nums);
int canCompleteCircuit(vector<int>& gas, vector<int>& cost);
int lengthOfLastWord(string s);
#endif //UTIL_H
