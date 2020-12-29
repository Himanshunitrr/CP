#include <bits/stdc++.h>
using namespace std;

int main()
{
  int size, num_c;
  int arr[101 ];
  queue<int> indices;
  cin >> size >> num_c;
  for (int i = 0; i < size; i++)
  {
    indices.push(i);
    cin >> arr[i];
  }
  while(indices.size() != 1){
    int first = indices.front();
    indices.pop();
    if(arr[first] > num_c){
      arr[first] -= num_c;
      indices.push(first);
    }
  }
  cout << indices.front() + 1;
  return 0;
}