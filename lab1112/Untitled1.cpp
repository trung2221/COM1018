#include <stdio.h>
	int main()
{
    int a[5] = {2, 5, 3, 6, 3};
    int b[5];
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i] + 3;
    }
    for (int j = 0; j < 5; j++)
    {
        printf("%d\t", a[j]);
    }
    printf("\n");
    for (int j = 0; j < 5; j++)
    {
        printf("%d\t", b[j]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (b[i] == b[j])
            {
                printf("\nb[%d] = b[%d]", i, j);
            }
        }
    }
    return 0;
}

