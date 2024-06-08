#include <iostream>
using namespace std;

//Global variable decaltion:
int g=40;
int main() {
    // Local varible declation:
    int a,b;

    // actual initialixation
    a=10;
    b=20;
    g= a + b;

    cout << g;
 return 0;
}