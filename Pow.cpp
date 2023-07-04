#include <bits/stdc++.h> 

long long Pow(int X, int N)
{
    if(N==0){
        return 1;
    }
    else{
        return (X*Pow(X,N-1));
    }

    // Write your code here. 
}
