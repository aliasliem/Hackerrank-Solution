#include <bits/stdc++.h>

using namespace std;

int main()
{   
    int n;
    cin >> n;
    vector<string>names;
    string s;
    while( n-- ) {
        string name, email;
        cin >> name >> email;
        if (regex_match(email, regex("(.*)(@gmail.com)"))) {
            names.push_back(name);
        }
    }
    sort(names.begin(), names.end());
    for( string s : names ) {
        cout << s << endl;
    }
}
