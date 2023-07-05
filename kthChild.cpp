#include<bits/stdc++.h>


string kthChildNthGeneration(int N, long long int K)
{
	if(N==1 or K==1) return "Male";

    if (K % 2 == 0) {
        if (kthChildNthGeneration(N - 1, K / 2) == "Male")
            return "Female";
        else
            return "Male";
    } 
	else {
        if (kthChildNthGeneration(N - 1, (K + 1) / 2) == "Male")
            return "Male";
        else
            return "Female";
    }
	
	// Write your code here	
}
