#include <bits/stdc++.h> 
int findKthElement(vector<int> &arr1, vector<int> &arr2, int k){
    // Write your code here.
    vector<int> v;
    arr1.insert(arr1.end(), arr2.begin(), arr2.end());
    sort(arr1.begin(),arr1.end());
    return arr1[k-1];
}
