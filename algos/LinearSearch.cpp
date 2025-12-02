#include <iostream>
using namespace std;
int N, X, arr[109];


bool LinearSearch(int target, int length, int* n){
  bool found = false;
  for (int i=0;i < length; i++){
  if (n[i] == target) {
      found = true;
      break;
    }
  }
  return found;
}

int main () {
  cin >> N >> X;
  for (int i=0; i<N; i++){
    cin >> arr[i];
  }
  if (LinearSearch(X, N, arr)) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
}