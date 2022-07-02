// https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1/?page=1&company[]=Intuit%20&sortBy=submissions

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
         int sum=n*(n+1)/2;
         for(i : array){
         sum = sum-i;
       }
       return sum;
    }
};
