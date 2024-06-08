#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // open a text file in write mode.
    ofstream outfile;
    outfile.open("afile.txt");
    char data[100];
    // trying to something

    cout << "enter your name:";
    cin.getline(data, 100);

    // write inputted data into the text file.
    outfile << data << endl;

    cout << "enter your age";
    cin >> data;
    cin.ignore();

    // again write inputted data into the text file.
    outfile << data << endl;

    // close the opened file.
    outfile.close();

    // open a text file in read mode.
    ifstream infile;
    infile.open("afile.txt");

    cout << "reading from the file" << endl;
    infile >> data;

    // write the data at the screen.
    cout << data << endl;

    // close the opened file
    infile.close();

    return 0;
}