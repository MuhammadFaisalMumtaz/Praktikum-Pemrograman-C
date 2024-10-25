#include <stdio.h>

int main() {
    
    int n,i;

    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    i = n;

    if (n > 50) {
        n = n - 25;
        n = n + 10;
          
          printf("Nilai n yang telah dimodifikasi: %d  adalah %d \n", i,n);
    } else {
      
          printf("Tidak dapat menampilkan nilai");
    }
    return 0;
}
