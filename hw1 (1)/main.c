#include <stdio.h>
#include "func.h"

int main()
{
  int a = 5;
  int b = 6;
  int c = 4;
  int d[8] = {2, 4, 6, 8, 10, 12, 14, 16};
  int d_count = (int)(sizeof(d) / sizeof(int));
  int f1, f2, f3, f4;

  f1 = func1(a, b);
  f2 = func2(a, b, c);
  f3 = func3(b, c);
  f4 = func4(d, d_count);

  printf("func1(5,6) = %d\n", f1);
  printf("func2(5,6,4) = %d\n", f2);
  printf("func3(6,4) = %d\n", f3);
  printf("func4({2,4,6,8,10,12,14,16}, 8) = %d\n", f4);

  /* Question
   a = 5;
   b = 6;
   c = 4;
   * d[8] = {2,4,6,8,10,12,14,16};
   * 
   * func1(a,b) = ?
   * func2(a,b,c) = ?
   * func3(b,c) = ?
   * func4(d,d_count) = ? */

  return 0;
}
