/*
  Ho va ten: Nguyen Van Tuan Nam
  Ma sinh vien: B24DTCN252
  Bai 10
*/
#include<stdio.h>
int main() {
    FILE *file;
    int M, N;
    int value, sum = 0;
    file = fopen("tst1003.fpl", "rb");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }
    fread(&N, sizeof(int), 1, file);
    fread(&M, sizeof(int), 1, file);
    for (int i = 0; i < M*N; i++) {
        fread(&value, sizeof(int), 1, file);
        sum += value;
    }
    fclose(file);
    printf("Tong cua %d so nguyen la: %d\n", M*N, sum);

    return 0;
}
