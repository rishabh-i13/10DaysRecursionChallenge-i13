#include <bits/stdc++.h> 

int partition(vector<int> &arr,int s,int e){
    int pivot=arr[s];// making the first element as
    int ct=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            ct++;
        }
    }
    //placing the pivot index at right place
    int pivotindex=s+ct;
    swap(arr[pivotindex],arr[s]);

    //time to work on left and right side of the pivot element
    int i=s,j=e;
    while(i<pivotindex and j>pivotindex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if (i < pivotindex and j > pivotindex) {
          swap(arr[i], arr[j]);
          i++;
          j--;
        }
    }
    return pivotindex;
}
void QuickSorting(vector<int> &arr,int s,int e){
    //base case
    if(s>=e) return;
    //partition
    int p=partition(arr,s,e);
    //for left part
    QuickSorting(arr,s,p-1);
    //for right part
    QuickSorting(arr,p+1,e);
}

vector<int> quickSort(vector<int> arr)
{
    int n=arr.size();
    QuickSorting(arr,0,n-1);
    return arr;
    // Write your code here.
}
