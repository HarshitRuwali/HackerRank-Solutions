#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set<int>s;
    int n;
    cin>>n;
    for (int i = 0; i< n; i++){
        int x, c;
        cin>>c>>x;
        switch(c){
            case 1:
                s.insert(x);
                break;
            case 2:
                s.erase(x);
                break;
            case 3:
                if (s.find(x) == s.end()){
                    cout<<"No"<<endl;
                }else{
                    cout<<"Yes"<<endl;
                }
                break;
        }
    }
    return 0;
}
