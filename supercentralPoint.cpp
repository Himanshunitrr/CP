#include <bits/stdc++.h>
using namespace std;

int main()
{
  int times, ans = 0;
  cin >> times;
  int arr[times][2];

  for (int i = 0; i < times; i++)
  {
    cin >> arr[i][0] >> arr[i][1];
  }
  for (int i = 0; i < times; i++)
  {
    int l = 0,r = 0, u = 0, d = 0;
    for (int j = 0; j < times; j++)
    {
      int a1 = arr[i][0], a2 = arr[i][1], b1 = arr[j][0], b2 = arr[j][1];
      if(a1 == b1 && a2 > b2)
        d++;
      if(a1 == b1 && a2 < b2)
        u++;
      if(a2 == b2 && a1 < b1)
        r++;
      if(a2 == b2 && a1 > b1)
        l++;
    }
    if ((l && u && d && r))
      ans++;
  }
  cout << ans << endl;

  return 0;
}