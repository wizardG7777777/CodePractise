//
// Created by yanchen on 6/9/25.
//
#include <vector>
using namespace std;
void merge(vector<int>& nums1, const int m, vector<int>& nums2, const int n) {
    int pt1 = m-1;
    int pt2 = n-1;
    for(int pt3=m+n-1;pt3>=0;pt3--){
        if(pt1>=0 && pt2>=0)
            nums1[pt3] = nums1[pt1] > nums2[pt2] ? nums1[pt1--] : nums2[pt2--];
        else if(pt1>=0){
            nums1[pt3] = nums1[pt1--];
        }
        else if(pt2>=0){
            nums1[pt3] = nums2[pt2--];
        }
        else
            break;
    }
}