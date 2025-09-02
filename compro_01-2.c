#include <stdio.h>

int main() {
    for (int i=2;i<=10;i++){ // กำหนดช่วง 2-10 เพิ่มขั้นเรื่อยๆ
        if (i%2==0) {  // แต่เป็นเลขคู่
            printf("%d\n", i); // แสดงเลข
        }
    }
    printf("End of loop\n");
    return 0;
}