#include <stdio.h>
// typedef unsigned long -> size_t ( #predefined )

#pragma region tooManycomments
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
#pragma endregion

#pragma region functions

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

void handleContinue()
{
    printf("I ain't stopping.\n");
}
void handleQuit()
{
    printf("Minor inconvenience made me quit.\n");
}
void handleNew()
{
    printf("This is something new...\n");
}
void handleDelete()
{
    printf("Yeah... It's deleted.\n");
}
void handleEdit()
{
    printf("What do you wanna change about it...\n");
}

void funSwitchExample()
{
    char optionbuffer[5];
    enum options
    {
        CONTINUE = 'c',
        DELETE = 'd',
        EDIT = 'e',
        NEW = 'n',
        QUIT = 'q',
    };
    while (optionbuffer[0] != QUIT)
    {
        scanf("%4s", optionbuffer);
        switch (optionbuffer[0])
        {
        case NEW:
            handleNew();
            break;
        case EDIT:
            handleEdit();
            break;
        case DELETE:
            handleDelete();
            break;
        case CONTINUE:
            handleContinue();
            break;
        case QUIT:
            handleQuit();
            break;
        }
    }
}

#pragma endregion

void display()
{
    char grade_1 = 'C';
    printRemark(grade_1);
    char grade_2 = 'D';
    printRemark(grade_2);
}

int main()
{
    display();
    funSwitchExample();
    return 0;
}
