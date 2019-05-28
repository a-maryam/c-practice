#include <iostream>

using namespace std;

int main() {
  int arr[10] = {};
  // the array name passed around is actually a pointer! I guess 
  int* x = arr;
  cout << "this is x: " << x << endl;
  cout << "this is the address of arr " << &arr << endl;

}
