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
    else
    {
        printf("We have to go back %d units\n", origin - destination);
    }
}

void if_short_circuiting(int origin, int destination)
{
    bool Condition1 = origin < destination;
    bool Condition2 = origin == destination;
    bool Condition3 = origin > destination;

    Condition1 &&printf("We have yet to cover %d units\n", destination - origin);
    (Condition2 || Condition3) && printf("We are %d units far from the destination\n", origin - destination);
}

#pragma endregion

void display()
{
    int origin = 0;
    int destination1 = -5;
    int destination2 = 0;

    if_conditional(origin, destination1);
    if_short_circuiting(origin, destination2);
}

int main()
{
        display();
    return 0;
}
