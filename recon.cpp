#include <bits/stdc++.h>
using namespace std;

int main()
{
  int size;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  int max = 1000, ans = 0;
  for (int i = 0; i < size; i++)
  {
    int diff = abs(arr[i] - arr[(i + 1) % size]);
    if(diff < max){
      max = diff;
      ans = i;
    }
  }
  cout << ans+1 << " " << ((ans + 1) % size)+1;
  return 0;
}