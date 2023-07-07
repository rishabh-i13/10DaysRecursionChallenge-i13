#include<bits/stdc++.h>

void working(int n,int from,int dest,int aux,vector<vector<int>> &ans){
    if(n>0){
        working(n-1,from,aux,dest,ans);
        ans.push_back({from,dest});
        working(n-1,aux,dest,from,ans);
    }
}
vector<vector<int>> towerOfHanoi(int n)
{
    vector<vector<int>> ans;
    working(n,1,3,2,ans);
    return ans;
    //    Write your code here.
}

