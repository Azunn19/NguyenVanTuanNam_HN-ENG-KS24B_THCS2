/*
  Ho va ten: Nguyen Van Tuan Nam
  Ma sinh vien: B24DTCN252
  Bai 05
*/
#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793

int main() {
    double duongKinh, chieuCao, SXungQuanh;
    printf("Nhap duong kinh hinh tru (cm): ");
    scanf("%lf", &duongKinh);
    printf("Nhap chieu cao hinh tru (cm): ");
    scanf("%lf", &chieuCao);
    double banKinh = duongKinh / 2.0;
    SXungQuanh = 2 * PI * banKinh * chieuCao;
    printf("Dien tich xung quanh hinh tru: %.2f cm^2\n", SXungQuanh);

    return 0;
}

