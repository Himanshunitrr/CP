#include <bits/stdc++.h>
using namespace std;

int main()
{
  int num_f;
  int x, total = 0;
  cin >> num_f;
  for (int i = 0; i < num_f; i++)
  {
    cin >> x;
    total += x;
  }
  
  int ans = total % (num_f + 1);
  if(ans == 0){
    cout << 2;
  }else{
    cout << 1;
  }

  return 0;
}