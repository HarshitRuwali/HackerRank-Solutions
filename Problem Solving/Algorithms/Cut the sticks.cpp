#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, A[1000];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    int numberOfsticks= n;

    while(numberOfsticks>0){

        cout<<numberOfsticks<<endl;

        int min=1000;
        
        for(int i=0; i<n; i++){
            if(A[i]<min && A[i]>0)
                min=A[i];
        }

        for(int i=0; i<n; i++){
            A[i]=A[i]-min;
            if(A[i]==0) 
                numberOfsticks--;
        }
        
    }

    return 0;
}