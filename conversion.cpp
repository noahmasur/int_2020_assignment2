#include <iostream>
#define FOOT_TO_INCHES 12 //conversion from feet to inches
#define INCHES_TO_CM 2.54 //conversion ratio from inches to centimeters
#define METERS_TO_CM 100//conversion ration from meters to centimeters

using namespace std;

int u_input(){
  int length;
  int inches;
  cout << "Enter the length in feet: ";
  cin >> length;
  length *= FOOT_TO_INCHES; //converting to inches
  cout << "Enter any extra inches: ";
  cin >> inches;
  return length + inches; //returning length in total inches
}

void conversion(int i_length, float &cm_length, int &m_length){
  cm_length = i_length * INCHES_TO_CM; //converting from inches to centimeters
  m_length = cm_length / METERS_TO_CM; //converting from centimeter to the nearest whole meter
  cm_length -= m_length * METERS_TO_CM; //finding the remainding centimeters
}

void u_out(int m_length, float cm_length){
  cout << m_length << " meters and " << cm_length << " centimeters" << endl; //outputting length
}

int main(int argc, char const *argv[]){
  float cm_length;
  int m_length;
  int i_length = u_input(); //getting length in inches
  conversion(i_length, cm_length, m_length); //updating meter length and centimeter length to the length of the input
  u_out(m_length, cm_length); //outputting length
}
