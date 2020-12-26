/* #include <bits/stdc++.h>
using namespace std;

int main()
{
  int num_i;
  int vasya = 0;
  int petya = 0;
  cin >> num_i;
  int arr[num_i];
  for (int i = 0; i < num_i; i++)
  {
    cin >> arr[i];
  }

  int num_q, dist;
  cin >> num_q;
  int arr_q[num_q];
  for (int i = 0; i < num_q; i++)
  {
    cin >> arr_q[i];
  }
  for (int i = 0; i < num_q; i++)
  {
    for (int j = 0; j < num_i; j++)
    {
      if (arr_q[i] == arr[j])
      {
        dist = j;
      }
    }

    vasya += dist + 1;
    petya += (num_i - dist);
  }
  cout << vasya << " " << petya;
  return 0;
} */

#include <bits/stdc++.h>
using namespace std;
long long n, d, x, q, w;
int a[100001];
main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    a[x] = i;
  }
  cin >> d;
  while (d--)
  {
    cin >> x;
    w += a[x] + 1;
    q += n - a[x];
  }
  cout << w << " " << q;
}
