#include <bits/stdc++.h>
using namespace std;

int main()
{
  int total, pos;
  cin >> total >> pos;
  vector<int> odd;
  vector<int> even;
  for (int i = 1; i <= total; i++){
    if(i%2){
      odd.push_back(i);
    }
    else{
      even.push_back(i);
    }
  }
  if(pos <= odd.size()){
    cout << odd[pos-1];
  }else{
    cout << even[pos-1 - odd.size()];
  }
  
  
    return 0;
}