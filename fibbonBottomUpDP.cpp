#include <iostream>

using namespace std;

int main(){
  int input;
  cout << "Please input which fib number you want (first number indexed at 0)" << endl;
  cin >> input;
  int* arr = new int[input+1];
  arr[0] = 0;
  arr[1] = 1;
  for (int i = 2; i < input+1; i++){
    arr[i] = arr[i-1] + arr[i-2];
  }
  cout << "Your number is " << arr[input] << endl;
  return 0;
}
