#include<bits/stdc++.h>
void getnew(int index,int n,string &ans,string &s){
  if(index==n){
    return;
  }
  //pick X not pick game
  if(s[index]!=s[index-1]){
    ans+=s[index];
    getnew(index+1,n,ans,s);
  }
  else{
    getnew(index+1,n,ans,s);
  }

}

string removeDuplicate(string &s)
{

    string ans=""; 
    ans+=s[0];
    int n=s.size();
    getnew(1,n,ans,s);
    return ans;

    
    // Write your code here
}
