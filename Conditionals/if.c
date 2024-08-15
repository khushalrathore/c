#include <stdio.h>
#include <stdbool.h>
// (void)0 -> does nothing :^), its a no-op

#pragma region functions

void if_conditional(int origin, int destination)
{
    bool Condition1 = origin < destination;
    bool Condition2 = origin == destination;
    bool Condition3 = origin > destination;

    if (Condition1)
    {
        printf("We have yet to cover %d units\n", destination - origin);
    }
    if (Condition2)
    {
        printf("Destination reached\n");
    }
    if (Condition3)
    {
        printf("We have to go back %d units\n", origin - destination);
    }
}

void if_conditional_ternary(int origin, int destination)
{
    bool Condition1 = origin < destination;
    bool Condition2 = origin == destination;
    bool Condition3 = origin > destination;

    Condition1 ? printf("We have yet to cover %d units\n", destination - origin)
               : (void)0;

    Condition2 ? printf("Destination reached\n")
               : (void)0;

    Condition3 ? printf("We have to go back %d units\n", origin - destination)
               : (void)0;
}

void if_short_circuiting(int origin, int destination)
{
    bool Condition1 = origin < destination;
    bool Condition2 = origin == destination;
    bool Condition3 = origin > destination;

    Condition1 &&printf("We have yet to cover %d units\n", destination - origin);
    Condition2 &&printf("Destination reached\n");
    Condition3 &&printf("We have to go back %d units\n", origin - destination);
}

#pragma endregion

void display()
{
    int origin = 0;
    int destination1 = -5;
    int destination2 = 0;
    int destination3 = 5;

    if_conditional(origin, destination1);
    if_conditional_ternary(origin, destination2);
    if_short_circuiting(origin, destination3);
}

int main()
{
        display();
    return 0;
}
