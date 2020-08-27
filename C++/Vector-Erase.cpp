#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print(std::vector<int> const &v){
    for (int i = 0; i < v.size(); i++){
        std::cout<<v.at(i)<<' ';
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    vector<int>v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int e;
    cin >> e;
    v.erase(v.begin()+(e-1));

    cin >> e >> n;
    v.erase(v.begin()+(e-1), v.begin()+(n-1));

    cout<<v.size()<<endl;
    print(v);

    return 0;
}
