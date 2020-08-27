#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    vector<int>v;
    int n, x;
    cin>>n;

    for (int i = 0; i <n; i++){
        //int x;
        cin>>x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());
    cin >> n; //ques
    for (int i= 0; i< n; i++){
        vector<int>::iterator low;
        cin >> x;
        low = lower_bound(v.begin(), v.end(), x);

        if (v[low - v.begin()] == x){
            cout<<"Yes "<<(low-v.begin()+1) << endl;
        }else{
            cout<<"No "<<(low - v.begin()+1) <<endl;
        }
    }
    return 0;
}
