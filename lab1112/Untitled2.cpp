#include <stdio.h>
int main()
{
    int a[3][3] = {{3, 9, 11}, {2, 6, 15}, {4, 7, 24}};
    int so, i, j, n = 0;

    printf("So ban dau la:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Nhap vao mot so tu 1 den 100: ");
    scanf("%d", &so);

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[i][j] == so)
            {
                printf("Vi tri cua so %d la [%d][%d]\n", so, i, j);
                n = 1;
            }
        }
    }

    if (!n)
    {
        printf("So %d khong co trong mang.\n", so);
    }

    return 0;
}
