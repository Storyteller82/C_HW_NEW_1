#include <stdio.h>
#include <stdint.h>

union input_number 
{
    uint32_t number;
    struct bytes 
    {
        uint8_t byte1;
        uint8_t byte2;
        uint8_t byte3;
        uint8_t byte4;
    } new_byte;
};

int main (int argc, char* argv[])
{
    union input_number in_number;

    in_number.number = 0;
    in_number.new_byte.byte1 = 0;
    in_number.new_byte.byte2 = 0;
    in_number.new_byte.byte3 = 0;
    in_number.new_byte.byte4 = 0;

    uint32_t N = 0, K = 0, M = 0;

    scanf ("%u", &N);

    in_number.number = N; 

    // printf ("%u\n", in_number.number);
    // printf ("%u %u %u %u\n", in_number.new_byte.byte4, in_number.new_byte.byte3, in_number.new_byte.byte2, in_number.new_byte.byte1);

    in_number.new_byte.byte4 = ~(in_number.new_byte.byte4);
   
    printf ("%u\n", in_number.number);
    //printf ("%u %u %u %u\n", in_number.new_byte.byte4, in_number.new_byte.byte3, in_number.new_byte.byte2, in_number.new_byte.byte1);

    return 0;
}