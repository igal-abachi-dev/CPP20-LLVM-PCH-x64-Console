#include "test.h"

//void test3(int v) {
//}

void test1(int v) {
    printf("%c", v);
  //  test3(v);
}

 void test2() {
    
}

/* Prevent g and eg from being optimized away. */
//void h() { test1(1); test2(); }