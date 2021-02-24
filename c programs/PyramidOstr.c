#include<stdio.h>

int main()
{
    int i, j, n, k;
    printf ("Enter Number of Rows : ");
    scanf ("%d", &n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
            printf ("   ");
        for(k=1; k<=i; k++)
            printf(" * ");
        for(k=i-1; k>=1; k--)
             printf(" * ");
        printf("\n");
    }
    return 0;
}