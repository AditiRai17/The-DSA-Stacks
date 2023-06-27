                                                //DYNAMIC PROGRAMMING : FIBONACCI NUMBER
class Solution {
public:
int dp[31];   //Since n<=30
    int fib(int n) {
        //int dp[n+1];
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        
        //memoise

        /*
        if(dp[n]!=-1)
        {
            return dp[n];
        }*/

        dp[0]=0;
        dp[1]=1;
        
        for(int i=2;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        
        return dp[n]=fib(n-1)+fib(n-2);

        //return fib(n-1)+fib(n-2);
    }
};

//IMPORTANT :

// Global Maximum size of array is 10^7 to 10^9
// Local Maximum size of array is 10^5 

//Steps to solve a DP Problem:
    //1. Think of a recursive solution
    //2. Think of a base case
    //3. Think of a memoisation solution
    //4. Think of a bottom up or Top down solution
    //5. Think of a optimised solution

//Top 10 types of DP Problems:
    //1. 0/1 Knapsack
    //2. Unbounded Knapsack
    //3. Fibonacci
    //4. Longest Common Subsequence
    //5. Longest Increasing Subsequence
    //6. Matrix Chain Multiplication
    //7. Edit Distance
    //8. Coin Change
    //9. Subset Sum
    //10. Rod Cutting
