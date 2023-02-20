#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    float toan, ly, hoa;
    printf("nhap ten hoc sinh: ");
    scanf("%s", &name);

    printf("nhap diem toan: ");
    scanf("%f", &toan);
    while (toan < 0 || toan > 10)
    {
        printf("diem toan khong hop le! Nhap lai: ");
        scanf("%f", &toan);
    }

    printf("nhap diem ly: ");
    scanf("%f", &ly);
    while (ly < 0 || ly > 10)
    {
        printf("diem ly khong hop le! Nhap lai: ");
        scanf("%f", &ly);
    }

    printf("nhap diem hoa: ");
    scanf("%f", &hoa);
    while (hoa < 0 || hoa > 10)
    {
        printf("diem hoa khong hop le! Nhap lai: ");
        scanf("%f", &hoa);
    }

    float tb = (toan + ly + hoa) / 3;
    switch ((int)tb)
    {
    case 10:
    case 9:
        printf("%s dat loai Loai A", name);
        break;
    case 8:
    case 7:
        printf("%s dat loai Loai B", name);
        break;
    case 6:
    case 5:
        printf("%s dat loai Loai C", name);
        break;
    default:
        printf("%s dat loai Loai D", name);
        break;
    }
    return 0;
}
