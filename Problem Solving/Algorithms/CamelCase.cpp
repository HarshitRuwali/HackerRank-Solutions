#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
    int i = 0;
    int total = 1;
    char c;
    
    while(s[i]){
        c = s[i];
        if (isupper(c))
            total++;
        i++;
    }
    return total;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
