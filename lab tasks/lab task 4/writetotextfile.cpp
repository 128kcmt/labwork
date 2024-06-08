// writing on a text file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile("exmple.txt");

    if (myfile.is_open())
    {
        myfile << "this is a line. \n";
        myfile << "this is nother line. \n";
        myfile.close();
    }
    else
    {
        cout << "unable to open file";
    }
    return 0;
}