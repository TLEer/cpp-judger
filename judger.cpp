#include <bits/stdc++.h>
#define For(i, l, r) for (int i = (l), i##end = (r); i <= i##end; ++i)
#define Fordown(i, r, l) for (int i = (r), i##end = (l); i >= i##end; --i)
using namespace std;
const int maxn = 200000;

int n;
int p[maxn + 1], q[maxn + 1];

bool check() {}

int main(int argc, char *argv[]) {
  FILE *fin = fopen("input", "r");
  FILE *fout = fopen("user_out", "r");
  FILE *fans = fopen("answer", "r");

  fscanf(fin, "%d", &n);
  For(i, 1, n) fscanf(fin, "%d", &p[i]);
  For(i, 1, n) fscanf(fout, "%d", &q[i]);
  if (!check()) {
    printf("0");
    fprintf(stderr, "wrong answer3.");
    exit(0);
  }
  printf("100");
  fprintf(stderr, "yes");
  return 0;
}
