// Write a function that reverses a string. The input string is given as an array of characters s.

// You must do this by modifying the input array in-place with O(1) extra memory.

void reverseString(char* s, int sSize) {
    int low=0, high = sSize-1;
    while(low<high)
    {
        s[low] = s[low] + s[high] - (s[high] = s[low]);
        low++;
        high--;
    }
    printf("%s", s);
}
