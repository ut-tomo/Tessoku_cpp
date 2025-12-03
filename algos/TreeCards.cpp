#include <iostream>

int N, K; 

int count (int n, int target){
  int count = 0;
  int min_sec = 1;
  int max_sec = n;
  for (int i=1; i<=std::min(n, target-2); i++){
    min_sec = std::max(1, target - i - n);
    max_sec = std::min(n,target - i - 1);
    count += std::max(0, max_sec - min_sec + 1);
    //std::cout << i << " " <<   max_sec << " " <<  min_sec << std::endl;
    
  }
  return count;
}

int main () {
  std::cin >> N >> K;
  std::cout << count(N, K) << std::endl;
  return 0;  
}
