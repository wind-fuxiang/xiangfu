#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
 const char * filename = "example.txt";
 char * buffer;
 long size;
 ifstream file(filename, ios::in|ios::binary|ios::ate);
 size = file.tellg();
 file.seekg(0, ios::beg);
 buffer = new char [size];
 file.read(buffer, size);
 cout << buffer <<endl;
 file.close();
 cout <<"the complete file is in a buffer";
 delete[] buffer;
 return 0;
}