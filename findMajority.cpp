#include <iostream>
using namespace std;

// Function to find Majority element
// in an array
int findMajority(int arr[], int n)
{
    int maxCount = 0;
    int index = -1; // sentinels
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        // update maxCount if count of
        // current element is greater
        if (count > maxCount) {
            maxCount = count;
            index = i;
        }
    }
    // if maxCount is greater than n/2
    // return the corresponding element
    if (maxCount > n / 2)
        return arr[index];
    else
        return -1;
}
// Driver code
int main()
{
    int arr[] = { 4, 4, 4, 3, 5, 4, 2, 4, 4,};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function calling
    cout << findMajority(arr, n) << endl;

    return 0;
}
