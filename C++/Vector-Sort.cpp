#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void print(std::vector<int> const &v){
    for (int i = 0; i< v.size(); i++){
        std::cout<<v.at(i)<<' ';
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int>v;
    int n;
    cin >> n;
    // int size = v.size();
    for (int i = 0; i< n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    
    print(v);
    return 0;
}
