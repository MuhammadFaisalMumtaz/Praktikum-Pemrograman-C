#include <stdio.h>
 
int main() {
	 
    // Mencetak deret angka 100 hingga 55 dengan selisih 5
    int i;
    for (i = 100; i >= 55; i -= 5) {
        printf("%d ", i);
    }

    printf("\n"); // Menambahkan baris baru setelah mencetak deret angka

    return 0;
}
