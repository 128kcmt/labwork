#include <iostream>
using namespace std;

int main() {
    int x,y;
    int sum;
    cout << "type a number:"; //type a number and press eneter
    cin >> x; // Get user input from the keyboard
    cout << "type another number";
    cin >> y;
    sum = x + y;
    cout << "the sum is :" << sum;
    return 0;
}