#include <stdio.h>
#include <stdint.h>

int main (int argc, char* argv[])
{
    int N, K, M = 0;

    scanf ("%d %d", &N, &K);

    for (int i = 0; i < K; i++)
    {
        M = M | (1 << i);
    }
    
    K = N & M;

    printf ("%d", K);

    return 0;
    
}