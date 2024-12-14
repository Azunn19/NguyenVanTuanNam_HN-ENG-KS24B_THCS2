/*
  Ho va ten: Nguyen Van Tuan Nam
  Ma sinh vien: B24DTCN252
  Bai 08
*/
#include <stdio.h>
#include <string.h>
typedef struct {
    char tenHang[100];
    char maHang[50];
    double giaBan;
    int soLuong;
} HangHoa;

int main() {
    HangHoa hang;
    printf("Nhap ten hang hoa: ");
    fgets(hang.tenHang, sizeof(hang.tenHang), stdin);
    hang.tenHang[strcspn(hang.tenHang, "\n")] = '\0';

    printf("Nhap ma hang: ");
    fgets(hang.maHang, sizeof(hang.maHang), stdin);
    hang.maHang[strcspn(hang.maHang, "\n")] = '\0';

    printf("Nhap gia ban: ");
    scanf("%lf", &hang.giaBan);

    printf("Nhap so luong: ");
    scanf("%d", &hang.soLuong);

    printf("\nThong tin hang hoa:\n");
    printf("Ten hang: %s\n", hang.tenHang);
    printf("Ma hang: %s\n", hang.maHang);
    printf("Gia ban: %.2f\n", hang.giaBan);
    printf("So luong: %d\n", hang.soLuong);

    return 0;
}

