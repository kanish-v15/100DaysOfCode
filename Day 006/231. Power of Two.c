// Given an integer n, return true if it is a power of two. Otherwise, return false.

// An integer n is a power of two, if there exists an integer x such that n == 2x.

bool isPowerOfTwo(int n) {
    long long int i = 0;
    if(n<=0)
    {
        return 0;
    }  
    while(n%2==0)
    {
        n/=2;
    }
    return n==1;
}
