#include <iostream>
using namespace std;

int main() {
    unsigned int a = 60; // 60=0011 1100
    unsigned int b = 13; //13 =0000 1101
    int c= 0;

    c=a & b; //12 = 00001100
    cout << "line 1- value of c is:" << c << endl;
    c= a|b; // 61 = 00111101
    cout << "line 2_ value of c is : " << c << endl;
    c=a^b; // 49 = 00110001
    cout << "line 3 - value of c is : " << c << endl;
    c=~a; //-61 = 11000011
    cout << "line 4- value of c is c:" << c << endl;
    c=a<<2; // 240 = 11110000
    cout << "line 5 -value of c is: " << c << endl;
    c= a>>2; // 15 = 00001111
    cout << "line 6-value of c is:" << c<< endl;

    return 0;
 }
