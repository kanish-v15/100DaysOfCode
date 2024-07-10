// An integer divisible by the sum of its digits is said to be a Harshad number.
// You are given an integer x. Return the sum of the digits of x if x is a Harshad number, otherwise, return -1.

int sumOfTheDigitsOfHarshadNumber(int x) {
    int sum = 0, num = x;
    while(x>0)
    {
        sum = sum + x%10;
        x/=10;
    }
    if(num%sum==0)
    {
        return sum;
    }
    else
    {
        return -1;
    }
}
