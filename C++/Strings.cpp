#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    
    cin >> a;
    cin >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    
    std::swap(a[0], b[0]);
    cout << a << " " << b << endl;
    return 0;
}
