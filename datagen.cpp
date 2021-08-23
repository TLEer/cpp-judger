#include <bits/stdc++.h>
using namespace std;

const string nowDir = "./";
const string inRedir = " < ";
const string outRedir = " > ";
const string dotIn = ".in";
const string dotOut = ".out";

int testDataNum;
int main() {
  system("clear");
  cout << "input the number of the test cases: " << endl;
  cin >> testDataNum;
  system("clear");
  cout << "input the file name: " << endl;
  string fileName;
  cin >> fileName;
  system("clear");
  string genName, stdName;
  cout << "input the generator & std name: " << endl;
  cin >> genName >> stdName;
  for (int pr = 1; pr <= testDataNum; pr++) {
    string now = fileName + to_string(pr);
    string s1 = nowDir + genName + outRedir + now + dotIn;
    system(s1.c_str());
    string s2 = nowDir + stdName + inRedir + now + dotIn + outRedir + now + dotOut;
    system(s2.c_str());
  }
  cout << endl;
  return 0;
}
