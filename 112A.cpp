#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1, s2;
	cin >> s1;
	cin >> s2;

	for (int i = 0; i < s1.length(); i++)
  	{
  		s1[i] = tolower(s1[i]);
  	}
  	for (int i = 0; i < s2.length(); i++)
  	{
  		s2[i] = tolower(s2[i]);
  	}

    cout << s1.compare(s2) << endl;

 	return 0;
}
