#include <bits/stdc++.h>
using namespace std;

int main()
{
  int first, second, pos;
  cin >> first >> second;
  int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
  int size = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < size; i++)
  {
    if (first == arr[i])
      pos = i;
  }
  if (arr[pos + 1] == second)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
  return 0;
}