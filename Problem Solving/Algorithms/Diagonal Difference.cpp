#include<iostream>
using namespace std;
int main()
{
    int n,ar[102][102],d1 = 0,d2 = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> ar[i][j];
            if(i==j)d1+=ar[i][j];
            if(i+j==n-1)d2+=ar[i][j];
        }
    }
    cout << abs(d1-d2) << endl;
    return 0;
}