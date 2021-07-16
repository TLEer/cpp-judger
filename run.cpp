#include <bits/stdc++.h>
#define For(i, l, r) for (int i = (l), i##end = (r); i <= i##end; ++i)
#define Fordown(i, r, l) for (int i = (r), i##end = (l); i >= i##end; --i)
using namespace std;

int main(int argc, char *argv[]) {
  string compile_com = "g++ ./";
  compile_com += argv[1];
  compile_com += ".cpp -o ./";
  compile_com += argv[1];
  int cnt = argc;
  while (cnt > 2) {
    compile_com += " ";
    compile_com += argv[cnt - 1];
    cnt--;
  }
  compile_com += " 2> ./err.out";
  if (system(compile_com.c_str()) == 256) {
    cout << "Compile Error" << endl;
    return 0;
  }
  string run_com = "./judger ";
  run_com += argv[1];
  system(run_com.c_str());
  return 0;
}