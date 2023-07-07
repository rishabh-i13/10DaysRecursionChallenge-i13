#include <bits/stdc++.h> 
int atoi(string str) {
    // Write your code here.
    string ans="";
    bool flag=false;
    for(int i=0;i<str.size();i++){
        if(str[i]>=48 and str[i]<=57){
            ans+=str[i];
        }
        else if(str[i]=='-'){
            flag=true;
        }
    }
    if(flag==true) return -stoi(ans);
    return stoi(ans);
}
