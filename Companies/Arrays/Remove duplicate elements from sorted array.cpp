// Microsoft 

// https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/0/?track=mts-array&batchId=341#

class Solution{
public:
    int remove_duplicate(int a[],int n){
        int res = 1;
        for(int i=1; i<n; i++){
        if(a[res-1]!=a[i]){
        a[res] = a[i];
        res++;
        }
    }
        return res;
    }
    
};
