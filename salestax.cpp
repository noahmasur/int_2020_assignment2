#include <iostream>

using namespace std;

float addTax(float taxRate, float cost){
  return cost * ((taxRate/100) + 1); //returning cost with the tax rate added on to it
}
