// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

int reverse(int x){
    long sum = 0;
    while(x!=0){
        sum = sum*10 + x%10;
        x = x/10;}
    if(sum > INT_MAX || sum < INT_MIN){
        return 0;}
    return sum;
}
