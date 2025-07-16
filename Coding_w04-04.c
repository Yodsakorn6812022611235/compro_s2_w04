#include <stdio.h>

int main() {  
    int score = 90.5;     // int ได้นับได้แค่สองตำแหน่ง 90 (ตัด .5 ออก)
    printf("Score = %d\n", score);
    return 0;
}

#include <stdio.h>

int main() {
    float score = 90.5;   //float ได้ 90.5 ครบตามที่ต้องการ
    printf("Score = %.1f\n", score);  
    return 0;
}
  // ถ้าเลือกผิด ค่าที่ออกก็จะผิด หรือ Error ได้