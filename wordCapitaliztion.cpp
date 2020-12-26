#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int test = s[0];
  if(test >= 97){
    s[0] -= 32;
  }
  cout << s;
  return 0;
}