class Solution {
public:
    // Memoizing the recursive solution
    int climbStairs(int n) {
        if(n==1 || n==2) return n;
        int ways[46]={0};
        ways[1]=1,ways[2]=2;
        for(int i=3;i<=n;i++) ways[i]=ways[i-1]+ways[i-2];
        return ways[n-1]+ways[n-2];
    }
};