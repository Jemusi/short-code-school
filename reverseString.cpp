#include <iostream>

using namespace std;

int main(){
  string temp;
  int size;
  cout << "Input the string you want to reverse" << endl;
  cin >> temp;
  string newS = "";
  for (int i = 0; i < temp.length(); i++){
    // newS.append(temp,temp.length()-1-i,1);
    newS+=temp[temp.length()-1-i];
  }
  cout << newS << endl;
}
