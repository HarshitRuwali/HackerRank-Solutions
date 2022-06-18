#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'happyLadybugs' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING b as parameter.
 */

string happyLadybugs(string b) {
    
    int blank=count(b.begin(), b.end(), '_');
    
    int n = b.length();
    int ans1=0,ans2=0;
    
    if(blank==0){
        for(int i=0; i<n-blank; i++){
            if(b[i]==b[i-1] || b[i]==b[i+1]){
                ans2++;
            }
        }
        
        if(ans2==n){
            return "YES";
        }else{
            return "NO";
        }
    }   
    sort(b.begin(),b.end());
    
    for(int i=0; i<n-blank; i++){
        if(b[i]==b[i-1] || b[i]==b[i+1]){
            ans1++;
        }
    }
    
    if( ans1==n-blank) {
        return "YES";
    }else{
        return "NO";
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string g_temp;
    getline(cin, g_temp);

    int g = stoi(ltrim(rtrim(g_temp)));

    for (int g_itr = 0; g_itr < g; g_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string b;
        getline(cin, b);

        string result = happyLadybugs(b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
