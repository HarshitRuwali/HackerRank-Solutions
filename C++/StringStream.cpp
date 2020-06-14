#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream hr(str);
    vector<int> v;

    while (!hr.eof())
    {
        int i;
        hr>> i;
        v.push_back(i);

        char c;
        hr>> c;
        if (c != ',') break;
    }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

