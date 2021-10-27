#include <stdio.h>

void print_binary_char(unsigned char);   /* char를 binary 형태로 출력 */
void print_binary_short(unsigned short); /* short를 binary 형태로 출력 */
void example_1();
void example_2();
void example_3();
void example_4();
void example_5();
typedef unsigned char *pointer;
void show_bytes(pointer, size_t); /* 특정 주소에 담겨있는 data 출력 */