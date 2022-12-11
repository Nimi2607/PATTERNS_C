/*
 A1 B2 C3
 D4 E5
 F6
 */
#include <stdio.h>
    int main()
    {
        char c = 'A';
        int num = 1;
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3 - i; j++)
            {

                printf("%c%d ",c, num);
                c++; num++;
            }
            printf("\n");
        }

        return 0;
    }
