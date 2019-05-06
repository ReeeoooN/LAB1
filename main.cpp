#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
const float p = 3.141592653589;
void print(int x1, int y1, int x2, int y2, float r1, float r2, float perim1,
           float perim2, float S1, float S2, int flag) {
  cout << "1" << endl;
  printf("circle(%d %d , %.1f)\n", x1, y1, r1);
  printf("perimetr = %.3f\n", perim1);
  printf("area = %.3f\n", S1);
  if (flag == 1) {
    printf("intersects: \n circle \n ");
  }
  cout << "2" << endl;
  printf("circle(%d %d , %.1f)\n", x2, y2, r2);
  printf("perimetr = %.3f\n", perim2);
  printf("area = %.3f\n", S2);
  if (flag == 1) {
    printf("intersects: \n circle \n ");
  }
  system("PAUSE");
  return;
}
void circle(int, int, float);
int main() {
  int x1, y1, x2, y2;
  float r1, r2, d, flag = 0, S1, S2, perim1, perim2;
  cout << "Input x1, y1, r1:" << endl;
  cin >> x1 >> y1 >> r1;
  cout << endl;
  perim1 = 2 * p * r1;
  S1 = p * r1 * r1;
  cout << "Input x2, y2, r2:" << endl;
  cin >> x2 >> y2 >> r2;
  perim2 = 2 * p * r2;
  S2 = p * r2 * r2;
  cout << endl;
  d = r1 + r2;
  if ((r1 < r2 || r2 < r1) && x1 == x2 && y1 == y2) {
    flag = 0;
  } else if (r1 == r2 && x1 == x2 && y1 == y2) {
    flag = 1;
  }
  if (d + r1 < r2) {
    flag = 0;
  } else if (((d + r1) == r2) || d + r1 > r2) {
    flag = 1;
  }
  if (d > r1 + r2) {
    flag = 1;
  } else if ((d == r1 + r2) || d < (r1 + r2)) {
    flag = 1;
  }
  print(x1, y1, x2, y2, r1, r2, perim1, perim2, S1, S2, flag);
  return 0;
}

