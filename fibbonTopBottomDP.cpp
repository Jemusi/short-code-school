#include <iostream>

using namespace std;

int fibHelper(int input, int*& arr);

  int main(){
    int input;
    cout << "Please input which fib number you want (first number indexed at 0)" << endl;
    cin >> input;
    int* arr = new int[input+1];
    fibHelper(input,arr);
    cout << "Your number is: " << arr[input] << endl;
    return 0;
  }

  int fibHelper(int input, int*& arr){
    if (input == 0) return 0;
    if (input == 1) return 1;
    arr[input] = fibHelper(input-1, arr) + fibHelper(input-2, arr);
    return arr[input];
  }
