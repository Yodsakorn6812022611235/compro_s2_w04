#include <stdio.h>   

int main() {
    char nameInitial = 'K';           // ตัวอักษรแรกของชื่อ
    int age = 20;                     // อายุ
    float weight = 48.5;              // น้ำหนัก
    char gender[] = "Female";         // เพศ

    
    printf("nameInitial = %c\n", nameInitial);
    printf("age = %d\n", age);
    printf("weight = %.1f\n", weight);     
    printf("gender = %s\n", gender);

    return 0;
}
