#include <stdio.h>
#include <stdlib.h>

#pragma region comments

// This syntax
//  struct points
//  {
//      int x;
//      int y;
//  };
//  void assingPoints()
//  {
//      struct points p;
//      p.x = 10;
//      p.y = 55;
//  }

// VS

// THIS SYNATX
//  typedef struct
//  {
//      int x;
//      int y;
//  } point;
// void assignPoints()
// {
//     point p1, p2;
//     p1.x = 10;
//     p1.y = 100;
//     p2.x = -200;
//     p2.y = 19;
// }

#pragma endregion

#pragma region functions

typedef struct
{
    long x;
    int y;
    char grade;
} point;

void plot(point *p)
{
    static int i = 0;
    static int j = 0;
    printf("(x%d, y%d)\t\t:\t(%ld, %d)\n", i++, j++, (*p).x, (*p).y);
}

void dynamicPoint()
{
    //  (point *)malloc(sizeof(point)); OR malloc(sizeof(point));  ...c will implicitely typecast anyways
    point *dynamicPoint = (point *)malloc(sizeof(point));
    (*dynamicPoint).x = 12;
    (*dynamicPoint).y = 122;
    printf("\nDynamic Point\n");
    plot(&*dynamicPoint);
    free(dynamicPoint);
}

#pragma endregion

void display()
{
    point L1;
    L1.x = 10;
    L1.y = 5;
    plot(&L1);

    point L2;
    L2.x = -10;
    L2.y = -5;
    plot(&L2);

    printf("sizeof point structure\t:\t%lu bits\n", sizeof(point) * 8);
    printf("sizeof point x\t\t:\t%lu bits\n", sizeof(L1.x) * 8);
    printf("sizeof point y\t\t:\t%lu bits\n", sizeof(L1.y) * 8);
    printf("sizeof point garde\t:\t%lu bits\n", sizeof(L1.grade) * 8);

    dynamicPoint();
}

int main()
{
    display();
    return 0;
}
