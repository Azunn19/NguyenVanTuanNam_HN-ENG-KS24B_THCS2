/*
  Ho va ten: Nguyen Van Tuan Nam
  Ma sinh vien: B24DTCN252
  Bai 01
*/
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main() {
    printf("%-20s %-10s %-20s %-20s\n", "Data Type", "Bits", "Min Value", "Max Value");
    printf("-------------------------------------------------------------\n");
    // char
    printf("%-20s %-10ld %-20d %-20d\n", "char", sizeof(char) * 8, CHAR_MIN, CHAR_MAX);
    // unsigned char
    printf("%-20s %-10ld %-20d %-20u\n", "unsigned char", sizeof(unsigned char) * 8, 0, UCHAR_MAX);
    // short
    printf("%-20s %-10ld %-20d %-20d\n", "short", sizeof(short) * 8, SHRT_MIN, SHRT_MAX);
    // unsigned short
    printf("%-20s %-10ld %-20d %-20u\n", "unsigned short", sizeof(unsigned short) * 8, 0, USHRT_MAX);
    // int
    printf("%-20s %-10ld %-20d %-20d\n", "int", sizeof(int) * 8, INT_MIN, INT_MAX);
    // unsigned int
    printf("%-20s %-10ld %-20d %-20u\n", "unsigned int", sizeof(unsigned int) * 8, 0, UINT_MAX);
    // long
    printf("%-20s %-10ld %-20ld %-20ld\n", "long", sizeof(long) * 8, LONG_MIN, LONG_MAX);
    // unsigned long
    printf("%-20s %-10ld %-20d %-20lu\n", "unsigned long", sizeof(unsigned long) * 8, 0, ULONG_MAX);
    // long long
    printf("%-20s %-10ld %-20lld %-20lld\n", "long long", sizeof(long long) * 8, LLONG_MIN, LLONG_MAX);
    // unsigned long long
    printf("%-20s %-10ld %-20d %-20llu\n", "unsigned long long", sizeof(unsigned long long) * 8, 0, ULLONG_MAX);
    // float
    printf("%-20s %-10ld %-20.3e %-20.3e\n", "float", sizeof(float) * 8, FLT_MIN, FLT_MAX);
    // double
    printf("%-20s %-10ld %-20.3e %-20.3e\n", "double", sizeof(double) * 8, DBL_MIN, DBL_MAX);
    // long double
    printf("%-20s %-10ld %-20.3Le %-20.3Le\n", "long double", sizeof(long double) * 8, LDBL_MIN, LDBL_MAX);
    
    return 0;
}

