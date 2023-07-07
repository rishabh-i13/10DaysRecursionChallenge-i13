#include<bits/stdc++.h>
void merge(vector<int> &arr,int s,int e){
    int mid=(s+e)/2;
    
    int len1=mid-s+1;
    int len2=e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[mainArrayIndex++];
    }
    mainArrayIndex=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[mainArrayIndex++];
    }
    //Merging the sorted arrays
    int index1=0;
    int index2=0;
    mainArrayIndex=s;
    
    while(index1<len1 && index2<len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
            arr[mainArrayIndex++]=second[index2++];
        }
    }
    while(index1<len1){
        arr[mainArrayIndex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainArrayIndex++]=second[index2++];
    }
    delete []first;
    delete []second;

}
void MergeSorting(vector<int> &arr,int s,int e){
    //base case
    if(s>=e) return;
    int mid=(s+e)/2;
    
    MergeSorting(arr,s,mid); // for left part
    MergeSorting(arr,mid+1,e); // for right part
    
    merge(arr,s,e);
}
void mergeSort(vector < int > & arr, int n) {
    // Write your code here.
    MergeSorting(arr,0,n-1);
    
}
