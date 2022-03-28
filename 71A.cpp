#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        cin >> s;
        if(s.size() > 10)
        {
            cout << s[0] << (s.size()-2) << s[s.size()-1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
}
