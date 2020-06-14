#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
 for(int i=1;i<n+1;i++)
    {
        for(int k=1;k<=n-i;k++)
    {
        cout<<" ";
    }
            for(int l=i;l>0;l--)
            {
                cout<<"#";
            }
        cout<<endl;
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

