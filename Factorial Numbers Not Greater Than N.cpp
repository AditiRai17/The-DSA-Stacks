/*

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