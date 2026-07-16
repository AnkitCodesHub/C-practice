#include <stdio.h>

int main()
{
    int a[10], f[10], n, i, j, count;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    if(n > 10)
    {
        printf("Maximum size is 10\n");
        return 0;
    }

    printf("Enter values:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        f[i] = 0;
    }

    printf("\nFrequencies:\n");

    for(i = 0; i < n; i++)
    {
        if(f[i] != -1)
        {
            count = 1;

            for(j = i + 1; j < n; j++)
            {
                if(a[i] == a[j])
                {
                    count++;
                    f[j] = -1;
                }
            }

            printf("%d occurred %d times\n", a[i], count);
        }
    }

    return 0;
}