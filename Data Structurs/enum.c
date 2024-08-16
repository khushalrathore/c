#include <stdio.h>
#include <stdlib.h>

#pragma region functions

enum week
{
    Sunday = 0,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

enum vibgyor
{
    Violet = 1,
    Indigo,
    Blue,
    Green,
    Yellow,
    Orange,
    Red
} color;

enum suffix
{
    st = 1,
    nd,
    rd,
    th
} number;

enum suffix getSuffix(int day)
{
    if (day >= 11 && day <= 13)
    {
        return th; // for 11th, 12th, 13th
    }
    switch (day % 10)
    {
    case 1:
        return st;
    case 2:
        return nd;
    case 3:
        return rd;
    default:
        return th;
    }
}

#pragma endregion

void display()
{
    enum week today = Monday;
    enum suffix daySuffix = getSuffix(today);
    const char *suffixStr[] = {"", "st", "nd", "rd", "th"};
    printf("Today is %d%s day of the week\n", today, suffixStr[daySuffix]);
}

int main()
{
    display();
    return 0;
}
