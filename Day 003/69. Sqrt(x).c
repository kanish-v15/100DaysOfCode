// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

// You must not use any built-in exponent function or operator.

// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

int mySqrt(int x) {
    long int y = 0;
    while(y*y<=x){
        y++;}
    return y-1;
}