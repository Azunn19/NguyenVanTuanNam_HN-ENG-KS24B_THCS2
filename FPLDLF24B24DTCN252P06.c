/*
  Ho va ten: Nguyen Van Tuan Nam
  Ma sinh vien: B24DTCN252
  Bai 06
*/
#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793
void TinhSXungQuanh(double duongKinh,double h){
	double r = duongKinh / 2.0;
	double SXungQuanh = 2 * PI * r * h;
    printf("Dien tich xung quanh hinh tru: %.2f cm^2\n", SXungQuanh);
}

int main() {
    double duongKinh, chieuCao;
    printf("Nhap duong kinh hinh tru (cm): ");
    scanf("%lf", &duongKinh);
    printf("Nhap chieu cao hinh tru (cm): ");
    scanf("%lf", &chieuCao);
    TinhSXungQuanh(duongKinh,chieuCao);

    return 0;
}
