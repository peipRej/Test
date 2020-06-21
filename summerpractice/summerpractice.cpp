#include <stdio.h>
int main(void) 
{
    int sum = 0;
    int dec[320] = { 1, };
    int i, j, p, q;
    for (i = 1; i < 1001; i++) 
    {

        for (j = 0; j < 302; j++) 
        {
            dec[j] = 2 * dec[j];
        }

        for (q = 0; q < 302; q++)
        {
            if (dec[q] > 9) {
                dec[q] = dec[q] % 10;
                dec[q + 1] = dec[q + 1] + 1;
            }
        }

    }

    for (p = 0; p < 302; p++) 
    {
        sum += dec[p];
    }

    printf("\nsum = %d \n", sum);
}