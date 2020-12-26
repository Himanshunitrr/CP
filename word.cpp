#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int lower = 0, upper = 0;
    int test;
  for (int i = 0; i < s.length(); ++i){
    test = s[i];
    if(test < 97){
      upper++;
    }else{
      lower++;
    }
  }
  if(lower >= upper){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  }else{
    transform(s.begin(), s.end(), s.begin(), ::toupper);
  }
  cout << s;
  return 0;
}