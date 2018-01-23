#include <bits/stdc++.h>
using namespace std;
int dp[101][101][101];
int a, b, c;
int min_t(int a1, int a2, int a3, int a4, int a5, int a6, int a7) {
  int m1 = min(min(a1, a2), a3);
  int m2 = min(min(a4, a5), a6);
  m1 = min(m1, m2);
  return min(m1, a7);
}
int calc(int x, int y, int z) {
  if (x == 0 && y == 0 && z == 0) {
    return (dp[x][y][z] = 0);
  } else if (x == 0 || y == 0 || z == 0) {
    if (x == 0)
      if (dp[x][y][z] != -1)
        return dp[x][y][z];
      else
        return (dp[x][y][z] = dp[x][z][y] = dp[y][x][z] = dp[y][z][x] =
                    dp[z][x][y] = dp[z][y][x] =
                        min(min(y, z) * b + (max(y, z) - min(y, z)) * a,
                            a * (y + z)));
    else if (y == 0)
      return min(min(x, z) * b + (max(x, z) - min(x, z)) * a, a * (x + z));
    else
      return min(min(y, x) * b + (max(y, x) - min(y, x)) * a, a * (y + x));
  } else {
    if (dp[x][y][z] != -1)
      return dp[x][y][z];
    else
      return (dp[x][y][z] = dp[x][z][y] = dp[y][x][z] = dp[y][z][x] =
                  dp[z][x][y] = dp[z][y][x] = min_t(
                      a + calc(x - 1, y, z), a + calc(x, y - 1, z),
                      a + calc(x, y, z - 1), b + calc(x - 1, y - 1, z),
                      b + calc(x - 1, y, z - 1), b + calc(x, y - 1, z - 1),
                      c + calc(x - 1, y - 1, z - 1)));
  }
}
int main() {
  int t, x, y, z;
  cin >> t;
  while (t--) {
    scanf("%d %d %d %d %d %d", &x, &y, &z, &a, &b, &c);
    if (a * 6 <= b * 3 && a * 6 <= c * 2) {
      printf("%d\n", a * (x + y + z));
    } else {
      for (int i = 0; i <= 100; i++) {
        for (int j = 0; j <= 100; j++) {
          for (int k = 0; k <= 100; k++) {
            dp[i][j][k] = -1;
          }
        }
      }
      printf("%d\n", calc(x, y, z));
    }
  }
  return 0;
}
