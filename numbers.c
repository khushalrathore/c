#include <stdio.h>
#include <float.h>
#include <stdbool.h>
#include <string.h>
// run this code and see the outputs

#pragma region outputFormatters
void intTypesInfo(const char *name, unsigned char size_in_bits, long long example)
{
    unsigned char SIGN_BIT = 1;
    unsigned char value_bits = size_in_bits - SIGN_BIT;

    // Min and max values for signed types
    signed long long min_type_value = -(1LL << value_bits);
    signed long long max_type_value = (1LL << value_bits) - 1;

    // Min and max values for unsigned types
    unsigned long long unsigned_min_type_value = 0;
    unsigned long long unsigned_max_type_value = (1ULL << size_in_bits) - 1;

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
        printf("bool range\t:\t%lld, %lld\n\n", unsigned_min_type_value, unsigned_max_type_value);
    }
}

void floatTypesInfo(const char *name, unsigned char size_in_bits, long double example)
{
    if (strcmp(name, "float") == 0)
    {
        printf("%s e.g.\t:\t%.6f\n", name, (float)example);
        printf("size of %s\t:\t%d bits\n", name, size_in_bits);
        printf("min value\t:\t%g\n", FLT_MIN);
        printf("max value\t:\t%g\n", FLT_MAX);
        printf("epsilon\t\t:\t%g\n", FLT_EPSILON);
    }
    else if (strcmp(name, "double") == 0)
    {
        printf("%s e.g.\t:\t%.15f\n", name, (double)example);
        printf("size of %s\t:\t%d bits\n", name, size_in_bits);
        printf("min value\t:\t%g\n", DBL_MIN);
        printf("max value\t:\t%g\n", DBL_MAX);
        printf("epsilon\t\t:\t%g\n", DBL_EPSILON);
    }
    else if (strcmp(name, "ldouble") == 0)
    {
        printf("%s e.g.\t:\t%.18Lf\n", name, example);
        printf("size of %s\t:\t%d bits\n", name, size_in_bits);
        printf("min value\t:\t%Lg\n", LDBL_MIN);
        printf("max value\t:\t%Lg\n", LDBL_MAX);
        printf("epsilon\t\t:\t%Lg\n", LDBL_EPSILON);
    }
    else
    {
        printf("Unknown type: %s\n", name);
    }
    printf("\n");
}

#pragma endregion

void intTypes()
{
    intTypesInfo("bool", sizeof(bool), (long long)true);
    intTypesInfo("char", sizeof(char) * 8, (long long)'c');
    intTypesInfo("short", sizeof(short) * 8, (long long)256);
    intTypesInfo("int", sizeof(int) * 8, (long long)65536);
    intTypesInfo("long", sizeof(long) * 8, (long long)9223372036854775807LL);
    intTypesInfo("llong", sizeof(long long) * 8, (long long)9223372036854775807LL);
    printf("\ncant find a way to do long calculations thus,unsigned range : 0, 0\n\n");
}

void floatTypes()
{
    floatTypesInfo("float", sizeof(float) * 8, 3.14F);
    floatTypesInfo("double", sizeof(double) * 8, 3.14159265358979);
    floatTypesInfo("ldouble", sizeof(long double) * 8, 3.141592653589793238L);
}

void display()
{
    intTypes();
    floatTypes();
}

int main()
{
    // run this code and see the outputs
    display();
    return 0;
}