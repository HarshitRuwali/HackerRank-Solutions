#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, i;
    cin>>n;
    int arr[n];
    for (i=0; i<=n; i++)
    {
        cin>>arr[i];
    }
    for (i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
