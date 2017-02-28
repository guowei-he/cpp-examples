// basic file operations
#include <iostream>
#include <fstream>
#include <unistd.h>

using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("example.txt");
  myfile << "Writing this to a file.\n";
  sleep(5);
  myfile.close();
  return 0;
}
