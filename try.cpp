#include <bits/stdc++.h>
using namespace std;

int arr[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
void toggle(int x, int y)
{
  arr[x][y] = !arr[x][y];
  if (x + 1 <= 2)
  {
    arr[x + 1][y] = !arr[x + 1][y];
  }
  if (y + 1 <= 2)
  {
    arr[x][y + 1] = !arr[x][y + 1];
  }
  if (x - 1 >= 0)
  {
    arr[x - 1][y] = !arr[x - 1][y];
  }
  if (y - 1 >= 0)
  {
    arr[x][y - 1] = !arr[x][y - 1];
  }
  /* if(x+1 <= 2 && y+1 <= 2){
    arr[x+1][y+1] = !arr[x + 1][y + 1];
  }
  if(x-1 >= 0 && y-1 >= 0){
    arr[x-1][y-1] = !arr[x - 1][y - 1];
  } */
  /* if (x + 1 <= 2 && y - 1 >= 0)
  {
    arr[x + 1][y - 1] = !arr[x + 1][y - 1];
  }
  if (x - 1 >= 0 && y + 1 <= 2)
  {
    arr[x - 1][y + 1] = !arr[x - 1][y + 1];
  } */
  /* cout << "-----------------" << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr[i][j];
    }
    cout << endl;
  } */
}

int main()
{
  int tog_array[3][3];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> tog_array[i][j];
    }
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (tog_array[i][j] % 2)
      {
        toggle(i, j);
      }
    }
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr[i][j];
    }
    cout << endl;
  }
  return 0;
}