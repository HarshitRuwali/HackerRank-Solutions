#include <bits/stdc++.h>

using namespace std;

int main(){

    int b, n, m;

    cin>>b>>n>>m;

    int k[n], d[m];

    for(int i=0;i<n;i++)
        cin >> k[i];

    for(int i=0;i<m;i++)
        cin >> d[i];

    int p = 0, a = 0;

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (k[i]+d[j]<=b && k[i]+d[j]>p){
                a++;
                p = k[i]+d[j];
            }
        }
    }

    if (a == 0){
        cout<<"-1";
    }else{
        cout<<p;
    }   

    return 0;
}