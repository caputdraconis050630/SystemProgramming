#include <stdio.h>
#include "func.h"

int main() {
  int a = 3;
  int b = 4;
  int c = 2;
  int d[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int d_count = (int)(sizeof(d)/sizeof(int));
  int f1, f2, f3, f4;

  f1 = func1(a, b);
  f2 = func2(a, b, c);
  f3 = func3(b, c);
  f4 = func4(d, d_count);

  printf("func1(3,4) = %d\n", f1);
  printf("func2(3,4,2) = %d\n", f2);
  printf("func3(4,2) = %d\n", f3);
  printf("func4({0,1,2,3,4,5,6,7,8,9}, 10) = %d\n", f4);

  /* Question
   * a = 5;
   * b = 6;
   * c = 4;
   * d[8] = {2,4,6,8,10,12,14,16};
   * 
   * func1(a,b) = ?
   * func2(a,b,c) = ?
   * func3(b,c) = ?
   * func4(d,d_count) = ? */


  return 0;
}
