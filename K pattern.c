/* program to print 1 2 3
                    4 5
                    6
                    7 8
                    9 10 11
                    */
#include <stdio.h>
    int main()
    {
        int a=1,n,i;
        for(n=3;n>0;n--)
        {
            for (i=1; i<=n; i++)
            {
                printf("%d ",a);
                a++;
            }
            printf("\n");
        }
        for (n=2; n<=3; n++)
        {
            for (i=1; i<=n; i++)
            {
                printf("%d ",a);
                a++;
            }
            printf("\n");
        }
        return 0;
    }
