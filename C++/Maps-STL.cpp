#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string,int>m;
    int n;
    string name;
    cin>>n;

    for(int i = 0; i<n; i++){
        int type, num;
        cin>>type;
        switch(type){
            case 1:
                cin>>name>>num;
                if (m.find(name) == m.end()){
                    m.insert(make_pair(name, num));
                }else{
                    m[name] += num;
                }
                break;
            
            case 2:
                cin >> name;
                m.erase(name);
                break;
            
            case 3:
                cin >> name;
                if(m.find(name) == m.end()){
                    cout<<"0"<<endl;
                }else{
                    cout<< m[name]<<endl;
                }
                break;
            
        }

    }
    return 0;
}
