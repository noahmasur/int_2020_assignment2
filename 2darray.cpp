#include <iostream>
#define ARR_ROW 4 //amount of rows in array
#define ARR_COLUMN 5 //amount of columns in array
using namespace std;

int main(int argc, char const *argv[]) {
  int a[ARR_ROW][ARR_COLUMN];

  for(int r = 0; r < ARR_ROW; ++r){ //looping through rows
    for(int c = 0; c < ARR_COLUMN; ++c){ //looping through columns
      cout << "Enter number " << c + 1 << " on row " << r + 1 << ": ";
      cin >> a[r][c];
    }
  }
  return 0;
}
