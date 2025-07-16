#include <stdio.h>

void functionA() {
    int value = 10;  // ตัวแปร value ใน functionA
    printf("Value in functionA: %d\n", value);
}

void functionB() {
    int value = 99;  // ตัวแปรชื่อเดียวกัน แต่เป็นของ functionB
    printf("Value in functionB: %d\n", value);
}

int main() {
    int value = 42;  // ตัวแปร value ของ main
    printf("Value in main: %d\n", value);

    functionA();  // เรียกใช้ functionA
    functionB();  // เรียกใช้ functionB

    return 0;
}
