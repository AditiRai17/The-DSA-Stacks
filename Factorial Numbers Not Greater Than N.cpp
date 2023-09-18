/*
    You are given an integer 'n'

    Your task is to return a sorted array (in increasing order) 
    containing all the factorial numbers which are less than or equal to 'n'

    The factorial number is a factorial of a positive integer, like 24 is a factorial number, as it is a factorial of 4.

    Note:
    In the output, you will see the array returned by you.

    -------------------
    Example:
    Input: 'n' = 7
    Output: 1 2 6
    Explanation: Factorial numbers less than or equal to '7' are '1', '2', and '6'
*/


long long fun(long long i){
    if (i<1){
        return 1;
    }
    return i*fun(i-1);
}

vector<long long> factorialNumbers(long long n) {
    // Write Your Code Here
    vector<long long>arr;
    for(long long i=1;i<=n;i++)
    {
        long long a=fun(i);
        if(a<=n)
        {
            arr.push_back(a);
        }
        else{
            break;
        }
    }
    return arr;
}