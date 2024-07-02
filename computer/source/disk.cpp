#include "disk.h"
#include "ram.h"
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

void save()
{
  string buf;
  int num[8];
  read(num);
  ofstream data("data.txt");
  for (int i = 0; i < 8; ++i)
  {
    buf = to_string(num[i]);
    data << buf << endl;
  }
  data.close();
}

void load()
{
  string buf;
  int num[8]{};
  ifstream data;
  data.open("data.txt");
  for (int i = 0; i < 8; ++i) data >> num[i];
  data.close();
  write(num);
}
