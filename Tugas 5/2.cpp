#include <stdio.h>

int main() {
    int kode;
    char jenis;
    float harga, diskon, harga_diskon;

    // Input kode barang
    printf("Masukkan kode barang: ");
    scanf("%d", &kode);

    // Input jenis barang (A, B, atau C)
    printf("Masukkan jenis barang (A, B, atau C): ");
    scanf(" %c", &jenis);

    // Input harga barang
    printf("Masukkan harga barang: ");
    scanf("%f", &harga);

    switch (jenis) {
        case 'A':
            diskon = 0.10; // 10% diskon untuk jenis A
            break;
        case 'B':
            diskon = 0.15; // 15% diskon untuk jenis B
            break;
        case 'C':
            diskon = 0.20; // 20% diskon untuk jenis C
            break;
        default:
            printf("Jenis barang tidak valid.\n");
            return 1;
    }

    // Menghitung harga setelah diskon
    harga_diskon = harga - (harga * diskon);

    printf("Jenis barang %c mendapat diskon = %.0f%%, Harga setelah didiskon = %.0f\n", jenis, diskon * 100, harga_diskon);

    return 0;
}
