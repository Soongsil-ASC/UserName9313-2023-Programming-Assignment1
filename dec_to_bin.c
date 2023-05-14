#include <stdio.h>
#include <math.h>

long toBin(int);

int main() {
    long bno;
    int dno;
    printf("====================================================\n");
    printf("\tFunction : convert decimal to binary\n");
    printf("====================================================\n");
    printf("Decimal Number : ");
    scanf("%d", &dno);
    bno = toBin(dno);
    printf("The Binary value is : %ld\n\n", bno);
    return 0;
}

long toBin(int dno) {
    // 구현후 github에 dec_to_bin.c 코드로 커밋
    long long bno = 0;
    int nRemainder = 0;
    int i = 0;
    while (dno != 0) {
        nRemainder = dno % 2;
        dno /= 2;
        bno += nRemainder * pow(10, i);
        i++;
    }
    return bno;
}