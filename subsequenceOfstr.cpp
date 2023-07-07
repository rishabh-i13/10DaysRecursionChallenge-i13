#include <bits/stdc++.h> 
void working(int index,int n,string &temp,string str,vector<string> &ans){
	if(index==n){
          if (!temp.empty()) {
            ans.push_back(temp);
          }
		  return;
    }
	//pick - not pick game
	temp+=str[index]; //picked
	working(index+1,n,temp,str,ans);
	//not picked
	temp.pop_back();
	working(index+1,n,temp,str,ans);
}

vector<string> subsequences(string str){
	vector<string> ans;
	string temp="";
	working(0,str.length(),temp,str,ans);
	return ans;
	// Write your code here
	
}
