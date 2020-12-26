#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  int size;
  cin >> size;
  cin >> s;
  int change = 0;
  for (int i = 0; i < size - 1; i++){
    if(s[i] == s[i+1])
      change++;
  }
  cout << change;
  return 0;
}