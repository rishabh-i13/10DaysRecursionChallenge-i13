#include<bits/stdc++.h>
vector<string> generateString(int N) {
    // Write your code here.
   if(N==0) return {};

   if(N==1) return {"0","1"};

   vector<string> temp =generateString(N-1);

   vector<string> answer;
   for(auto it:temp){
       string y=it+'0';
       answer.push_back(y);
       
       if(it.back()=='0'){
           string x=it+'1';
           answer.push_back(x);
       }

       
   }
   return answer;
}
