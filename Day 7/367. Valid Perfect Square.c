// Given a positive integer num, return true if num is a perfect square or false otherwise.

// A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer with itself.

// You must not use any built-in library function, such as sqrt.

bool isPerfectSquare(int num) {
    int i = 1;
    while(num>0){
        num-=i;
        i+=2;
        if(!num) return true;}
    return false;}
