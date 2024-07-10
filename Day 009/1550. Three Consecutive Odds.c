// Given an integer array arr, return true if there are three consecutive odd numbers in the array. Otherwise, return false.

bool threeConsecutiveOdds(int* arr, int arrSize) {
    for(int i = 2; i < arrSize; i++)
    {
        if(arr[i]%2==1 && arr[i-1]%2==1 && arr[i-2]%2==1)
        {
            return 1;
        }
    }
    return 0;
}
