/*
  Ho va ten: Nguyen Van Tuan Nam
  Ma sinh vien: B24DTCN252
  Bai 09
*/
#include <stdio.h>
#include <string.h>
typedef struct {
    char tenHang[100];
    char maHang[50];
    double giaBan;
    int soLuong;
} HangHoa;

// Ham sap xep mang ban ghi theo gia tri tang dan
void sapXepTheoGia(HangHoa hangHoa[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (hangHoa[i].giaBan > hangHoa[j].giaBan) {
                HangHoa temp = hangHoa[i];
                hangHoa[i] = hangHoa[j];
                hangHoa[j] = temp;
            }
        }
    }
}

// Ham tim kiem xem co hang hoa nao co gia ban lon hon gia tri cho truoc khong
int timKiemGiaLonHon(HangHoa hangHoa[], int n, double giaMongMuon) {
    for (int i = 0; i < n; i++) {
        if (hangHoa[i].giaBan > giaMongMuon) {
            return 1;
        }
    }
    return 0;
}

// Ham in danh sách mang ban ghi
void inDanhSach(HangHoa hangHoa[], int n) {
    printf("\nDanh sach hang hoa:\n");
    printf("%-30s %-15s %-10s %-10s\n", "Ten Hang", "Ma Hang", "Gia Ban", "So Luong");
    for (int i = 0; i < n; i++) {
        printf("%-30s %-15s %-10.2f %-10d\n", hangHoa[i].tenHang, hangHoa[i].maHang, hangHoa[i].giaBan, hangHoa[i].soLuong);
    }
}

int main() {
    int n;
    printf("Nhap so luong hang hoa: ");
    scanf("%d", &n);
    HangHoa hangHoa[n];
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin hang hoa thu %d:\n", i + 1);
        getchar();
        printf("Nhap ten hang hoa: ");
        fgets(hangHoa[i].tenHang, sizeof(hangHoa[i].tenHang), stdin);
        hangHoa[i].tenHang[strcspn(hangHoa[i].tenHang, "\n")] = '\0';
        
        printf("Nhap ma hang: ");
        fgets(hangHoa[i].maHang, sizeof(hangHoa[i].maHang), stdin);
        hangHoa[i].maHang[strcspn(hangHoa[i].maHang, "\n")] = '\0';

        printf("Nhap gia ban: ");
        scanf("%lf", &hangHoa[i].giaBan);

        printf("Nhap so luong: ");
        scanf("%d", &hangHoa[i].soLuong);
    }
    sapXepTheoGia(hangHoa, n);

    inDanhSach(hangHoa, n);

    double giaMongMuon;
    printf("\nNhap gia tri mong muon de tim kiem: ");
    scanf("%lf", &giaMongMuon);

    if (timKiemGiaLonHon(hangHoa, n, giaMongMuon)) {
        printf("\nCo it nhat mot hang hoa co gia ban lon hon %.2f\n", giaMongMuon);
    } else {
        printf("\nKhong co hang hoa nao co gia ban lon hon %.2f\n", giaMongMuon);
    }

    return 0;
}

