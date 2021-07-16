#include <bits/stdc++.h>
using namespace std;

const int MaxN = 200000;

int n;
int p[MaxN + 1], q[MaxN + 1];

bool check(int res) {}

int main(int argc, char *argv[]) {
  FILE *fin = fopen("input", "r");
  FILE *fout = fopen("user_out", "r");
  FILE *fans = fopen("answer", "r");

  int u, v;
  fscanf(fout, "%d", &u);
  fscanf(fans, "%d", &v);
  if (v == -1) {
    if (u != -1) {
      printf("0");
      fprintf(stderr, "wrong answer1.");
      exit(0);
    } else {
      printf("100");
      exit(0);
    }
  }

  if (u != v) {
    printf("0");
    fprintf(stderr, "wrong answer2.");
    exit(0);
  }

  fscanf(fin, "%d", &n);
  for (int i = 1; i <= n; ++i) fscanf(fin, "%d", &p[i]);
  for (int i = 1; i <= n; ++i) fscanf(fout, "%d", &q[i]);
  if (!check(v)) {
    printf("0");
    fprintf(stderr, "wrong answer3.");
    exit(0);
  }
  printf("100");
  fprintf(stderr, "yes");
  return 0;
}
