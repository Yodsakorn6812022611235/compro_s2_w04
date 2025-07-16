#include <stdio.h>

int main() {       // int ใช้สำหรับเลขจำนวนเต็ม .5 จะถูกตัดทิ้ง
    int score = 90.5; 
    printf("Score = %d\n", score);
    return 0;
}

#include <stdio.h>

int main() {       // ได้ค่าทศนิยมตามต้องการ เพราะ float เก็บเลขทศนิยมได้
    float score = 90.5;
    printf("Score = %.1f\n", score);  
    return 0;
}
 // หากใช้ผิด ค่าที่ออกก็จะผิด