#include <stdio.h>
#include <stdint.h>

int main (int argc, char* argv[])
{
    int N = 0, K = 0, M = 0;

    scanf ("%d", &N);

    for (int i = 0; i < 32; i++)
    {
        M = N & (1 << i);
 
        if (M)
            K++;
    }

    printf ("%d", K);

    return 0;
    
}