#include <stdio.h>

int main() {
    int count = 2; //กำหนดตัวแปรเริ่มต้น
    while (count <= 10) {//ค่าตัวแปรน้อยกว่าเท่ากับ10
        if (count % 2 == 0) // หาร2เท่ากับ0
        { 
            printf("%d\n", count);//แสดงค่าตัวแปรที่หาร2แล้วลงตัว
        }
        count++; // 
    }
    printf("End of loop\n", count); // แสดง end of loop
    return 0;
}
    
