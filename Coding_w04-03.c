#include <stdio.h>

int main() {
    char nameInitial = 'Y';           // ตัวอักษรแรกของชื่อ
    int age = 19;                     // อายุ
    float weight =75;                 // น้ำหนัก
    char gender[] = "man";           // เพศ

    printf("nameInitial = %c\n", nameInitial);
    printf("age = %d\n", age);
    printf("weight = %.1f\n", weight);
    printf("gender = %s\n", gender);

    return 0;
}
