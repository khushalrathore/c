#include <stdio.h>
// run this code and see the outputs
//
// typedef unsigned long -> size_t ( #predefined )
// constant_expression -> constexpr
//
// switch (grade){
//     case constexpr_1:
//         printf("print this when grade == constexpr_1 !\n");
//         break; (must write "break;" else code will continue to run further and print all possible messages upto next "break;")
//     case constexpr_N:
//          printf("print this when grade == constexpr_N !\n");
//         break;
//     default:
//         printf("print this if grade doesnt match any case --> Invalid grade\n");
// }

void printRemark(char grade)
{
    printf("Remark\t:\t");
    switch (grade)
    {
    case 'A':
        printf("Excellent!\n");
        break;
    case 'B':
        printf("Good job!\n");
        break;
    case 'C':
        printf("Average\n");
        break;
    default:
        printf("Invalid grade\n");
    }
}
void display()
{
    char grade_1 = 'C';
    printRemark(grade_1);
    char grade_2 = 'D';
    printRemark(grade_2);
}

int main()
{
    // run this code and see the outputs
    display();
    return 0;
}
