#include <bits/stdc++.h>
using namespace std;

int main()
{
  int pages, sum = 0, ans = 0;
  cin >> pages;
  int arr[7];
  for (int i = 0; i < 7; i++)
  {
    cin >> arr[i];
  }
  while(sum < pages){
    for (int i = 0; i < 7; i++)
    {
      sum += arr[i];
      ans = i;
      if(sum >= pages){
        break;
      }
    }
    
  }
  cout << ans + 1;
  return 0;
}