#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char ten[50];
    int tuoi;
    float diemToan;
    float diemVan;
} sinhvien;

sinhvien gioi_nhat(sinhvien* mang, int kich_thuoc) {
    sinhvien sinh_vien_gioi_nhat = mang[0];
    float average = (mang[0].diemToan + mang[0].diemVan) / 2.0;

    for (int i = 1; i < kich_thuoc; i++) {
        if ((mang[i].diemToan + mang[i].diemVan) / 2.0 > average) {
            sinh_vien_gioi_nhat = mang[i];
            average = (mang[i].diemToan + mang[i].diemVan) / 2.0;
        }
    }
    return sinh_vien_gioi_nhat;
}

void Bai_tap_buoi_8() {
    sinhvien list[100];
    int size = 0;
    FILE* fptr = fopen("D:\\IMIC\\danh_sach_hoc_sinh.csv", "r");
    if (fptr == NULL) {
        printf("Khong mo duoc");
        return;
    }
    else printf("Mo duoc\n");
    char buffer[29];
    //Hàm fgets sẽ đọc dữ liệu cho dến khi gặp ký tự xuống dòng, tuy nhiên file csv đang lưu ở định dạng xuống dòng cũ nên máy không coi ký tự xuống dòng đó 
    //là một sự dừng lại nên nó sẽ đọc cho đến khi max size buffer 
    if (fgets(buffer, sizeof(buffer), fptr) != NULL) {};

    while (fscanf_s(fptr, "%49[^,],%d,%f,%f\n", list[size].ten, 50, &list[size].tuoi, &list[size].diemToan, &list[size].diemVan) == 4) {
        size++;
    }
    fclose(fptr);
    printf("\n--- DANH SACH SINH VIEN ---\n");
    for (int i = 0; i < size; i++) {
        printf("Ten: %s, tuoi: %d, diem toan: %.2f, diem van: %.2f\n", list[i].ten, list[i].tuoi, list[i].diemToan, list[i].diemVan);
    }
    sinhvien gioinhat = gioi_nhat(list, size);
    printf("Sinh vien gioi nhat: %s, tuoi: %d, toan: %.2f, van: %.2f\n", gioinhat.ten, gioinhat.tuoi, gioinhat.diemToan, gioinhat.diemVan);
}
