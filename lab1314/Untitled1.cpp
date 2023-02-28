#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    // khai bao
    char str1[100];
    printf("Nhap mot chuoi: ");
    gets(str1);
    printf("\nDo dai chuoi la bao gom khoang trang: %d", strlen(str1));

    // do dai chuoi bao gom khong khoang trang
    int len = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != ' ')
        {
            len++;
        }
    }
    printf("\nDo dai cua chuoi khong bao gom khoang trang la: %d", len);

    // tim xem trong chuoi da nhap bao nhieu chu t
    int count_t = 0;
    int pos_t[100];
    int index = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == 't' || str1[i] == 'T')
        {
            count_t++;
            pos_t[index] = i;
            index++;
        }
    }
    printf("\nSo lan xuat hien cua chu 't': %d\n", count_t);
    if (count_t > 0)
    {
        printf("Vi tri cua cac chu 't': ");
        for (int i = 0; i < count_t; i++)
        {
            printf("%d ", pos_t[i]);
        }
        // printf("\n");
    }

    // tao str2 copy str1
    char str2[strlen(str1) + 1];
    strcpy(str2, str1);
    printf("\nChuoi str2: %s\n", str2);
    for (int i = 0; str2[i] != '\0'; i++)
    {
        if (i == 0 || str2[i - 1] == ' ')
        {
            str2[i] = 'A';
        }
    }
    printf("Chuoi str2 sau khi thay the: %s\n", str2);

    // in ra chuoi chu in hoa cua str1
    printf("Chuoi chu HOA la: %s", strupr(str1));

    // in ra chuoi chu in hoa cua str2
    printf("\nChuoi chu thuong la: %s", strlwr(str1));

    // So sanh str1 vs str2
    if (strcmp(str1, str2) == 0)
    {
        printf("Hai chuoi giong nhau.\n");
    }
    else
    {
        printf("\nHai chuoi khac nhau.\n");
    }

    return 0;
}
