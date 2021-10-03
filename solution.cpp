//
// Created by Kylian Lee on 2021/10/03.
//

#include <iostream>
#include <queue>

using namespace std;

int main(){
  int num;
  priority_queue<int, vector<int>, greater<>> pq;
  cin >> num;
  for (int i = 0; i < num; ++i) {
    int tmp;
    cin >> tmp;
    pq.push(tmp);
  }
  for (int i = 0; i < num; ++i) {
    cout << pq.top() << '\n';
    pq.pop();
  }
  return 0;
}