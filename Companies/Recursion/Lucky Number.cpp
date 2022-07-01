// https://practice.geeksforgeeks.org/problems/lucky-numbers2911/0/?track=DSASP-Recursion&batchId=154#

class Solution{
public:
    bool isLucky(int n) {
        int i = 0;
        for(i=2; i<=n; i++){
        if(n%i==0)
        return false;
        n = n - (n/i);
        }
    }
};
