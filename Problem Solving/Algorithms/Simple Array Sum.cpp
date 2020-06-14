#include <iostream>
using namespace std;
 
#define MAX_SIZE 1000
 
// Function declaration
int sum(int arr[], int start, int len);
 
 
int main()
{
    int arr[MAX_SIZE];
    int num, i, sumofarray;
    cin>>num;
    for(i=0; i<num; i++)
    {
        cin>>arr[i];
    }
 
 
    sumofarray = sum(arr, 0, num);
    cout<<sumofarray;
 
    return 0;
}
 
// Recursively finding the sum of elements in an array.
int sum(int arr[], int start, int len)
{
    // Recursion base condition
    if(start >= len)
        return 0;
 
    return (arr[start] + sum(arr, start + 1, len));
}

