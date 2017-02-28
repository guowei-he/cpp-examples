// reading a text file
#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>

using namespace std;

int main () {
  string line;
  ifstream myfile ("example.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    sleep(5);
    myfile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}
