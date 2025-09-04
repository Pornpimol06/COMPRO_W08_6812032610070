#include <stdio.h>

int main() {
    int start, stop; // ประกาศตัวแปรสำหรับเก็บค่าเริ่มต้นและค่าสุดท้าย

    // รับค่าตัวเลขจากผู้ใช้
    printf("Enter start number: ");
    scanf("%d", &start); // อ่านค่าตัวเลขเริ่มต้นจากผู้ใช้

    printf("Enter stop number: ");
    scanf("%d", &stop); // อ่านค่าตัวเลขสุดท้ายจากผู้ใช้

    // แสดงข้อความที่บอกค่าเริ่มต้นและค่าสุดท้าย
    printf("Start number is %d and stop number is %d\n", start, stop);
    printf("---------------\n");

    // แสดงลำดับตัวเลขจาก start ไปยัง stop เพิ่มทีละ 1
    printf("Sequence from start to stop: ");
    for (int i = start; i <= stop; i++) {
        printf("%d ", i); // แสดงตัวเลขแต่ละตัวในช่วง
    }

    printf("\nThank you.\n"); // แสดงข้อความขอบคุณ

    return 0; // จบโปรแกรม
}
