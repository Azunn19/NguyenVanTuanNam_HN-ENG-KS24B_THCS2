/*
  Ho va ten: Nguyen Van Tuan Nam
  Ma sinh vien: B24DTCN252
  Bai 04
*/
#include <stdio.h>
#include <math.h>

#define G 9.8
#define PI 3.141592653589793

int main() {
    double u, theta, H;
    printf("Nhap van toc ban dau (u): ");
    scanf("%lf", &u);
    printf("Nhap goc ban (theta) (don vi do): ");
    scanf("%lf", &theta);
    double theta_rad = theta * PI / 180.0;
    H = (u * u * pow(sin(theta_rad), 2)) / (2 * G);
    printf("Do cao toi da (H): %.2f\n", H);

    return 0;
}
