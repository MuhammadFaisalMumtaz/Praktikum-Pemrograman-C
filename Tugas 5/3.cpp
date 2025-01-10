#include <stdio.h>

int main() {
    int jam_masuk, jam_keluar, lama_parkir, biaya_parkir;

    // Input jam masuk
    printf("Jam masuk: ");
    scanf("%d", &jam_masuk);

    // Input jam keluar
    printf("Jam keluar: ");
    scanf("%d", &jam_keluar);

    // Menghitung lama parkir
    if (jam_keluar >= jam_masuk) {
        lama_parkir = jam_keluar - jam_masuk;
    } else {
        lama_parkir = (12 - jam_masuk) + jam_keluar;
    }

    switch (lama_parkir) {
        case 0:
        case 1:
            biaya_parkir = 2000;
            break;
        default:
            biaya_parkir = 2000 + (lama_parkir - 2) * 500;
            break;
    }

    printf("Lama parkir: %d jam\n", lama_parkir);
    printf("Biaya parkir: %d\n", biaya_parkir);

    return 0;
}
