#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
// run this code and see the outputs

void dataTypesInfo(const char *name, unsigned char size_in_bits, long long example)
{
    unsigned char SIGN_BIT = 1;
    unsigned char value_bits = size_in_bits - SIGN_BIT;

    // Min and max values for signed types
    signed long long min_type_value = -(1LL << value_bits);
    signed long long max_type_value = (1LL << value_bits) - 1;

    // Min and max values for unsigned types
    unsigned long long unsigned_min_type_value = 0;
    unsigned long long unsigned_max_type_value = (1ULL << size_in_bits) - 1;

    // Conditional output
    (strcmp(name, "char") == 0) ? printf("%s e.g.\t:\t%c\n", name, (char)example)
                                : printf("%s e.g.\t:\t%lld\n", name, example);

    if (size_in_bits > 1)
    {
        printf("size of %s\t:\t%d bits\n", name, size_in_bits);
        printf("signed range\t:\t%lld, %lld\n", min_type_value, max_type_value);
        printf("unsigned range\t:\t%llu, %llu\n\n", unsigned_min_type_value, unsigned_max_type_value);
    }
    else
    {
        printf("size of %s\t:\t%d bit\n", name, size_in_bits);
        printf("bool range\t:\t%lld, %lld\n", unsigned_min_type_value, unsigned_max_type_value);
    }
}

void display()
{
    dataTypesInfo("char", sizeof(char) * 8, (long long)'c');
    dataTypesInfo("short", sizeof(short) * 8, (long long)256);
    dataTypesInfo("int", sizeof(int) * 8, (long long)65536);
    dataTypesInfo("long", sizeof(long) * 8, (long long)9223372036854775807LL);
    dataTypesInfo("llong", sizeof(long long) * 8, (long long)9223372036854775807LL);
    dataTypesInfo("bool", sizeof(bool), (long long)true);

    printf("\ncant find a way to do long calculations thus,unsigned range : 0, 0\n\n");
}

int main()
{
    // run this code and see the outputs
    display();
    return 0;
}