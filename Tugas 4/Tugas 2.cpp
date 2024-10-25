#include <stdio.h>

int main() {
    int n,i;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    i = n;
    
    if (n > 50) {
        n = n - 25;
 
          printf("Nilai n yang telah dimodifikasi: %d - 25 adalah %d \n", i,n);
    } else {
        n = n + 10;
        
          printf("Nilai n yang telah dimodifikasi: %d + 10 adalah %d \n", i,n);
    }

    return 0;
}
