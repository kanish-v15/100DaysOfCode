// Given an integer x, return true if x is a palindrome, and false otherwise.

// Example 1:
// Input: x = 121
// Output: true
// Explanation: 121 reads as 121 from left to right and from right to left.

// Example 2:
// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

bool isPalindrome(int x) {
    long long int ori = x;
    long long int sum = 0;
    while(x>0)
    {
        sum = (sum*10) + x%10;
        x/=10;
    }
    if(ori==sum)
        return true;
    else
        return false;
}
