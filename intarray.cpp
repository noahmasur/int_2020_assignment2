#include <iostream>
#define ARR_SIZE 10 //size of array
using namespace std;

int main(int argc, char const *argv[]) {
  int numberArray[ARR_SIZE];

  //input to the array
  for(int i = 0; i < ARR_SIZE; ++i){
    cout << "Enter nonnegative integer " << i + 1 << ": ";
    cin >> numberArray[i];
  }

  //printing out from array
  for(int i = 0; i < ARR_SIZE; ++i){
    cout << numberArray[i] << endl;
  }
  return 0;
}
