#include <stdio.h>
#include <stdbool.h>
// run this code and see the outputs
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
    else if (Condition2)
    {
        printf("Destination reached\n");
    }
    else
    {
        printf("We have to go back %d units\n", origin - destination);
    }
}

void if_conditional_ternary(int origin, int destination)
{
    bool Condition1 = origin < destination;
    bool Condition2 = origin == destination;
    bool Condition3 = origin > destination;

    Condition1   ? printf("We have yet to cover %d units\n", destination - origin)
    : Condition2 ? printf("Destination reached\n")
                 : printf("We have to go back %d units\n", origin - destination);
}

#pragma endregion

void display()
{
    int origin = 0;
    int destination1 = -5;
    int destination2 = 0;

    if_conditional(origin, destination1);
    if_conditional_ternary(origin, destination2);
}

int main()
{
    // run this code and see the outputs
    display();
    return 0;
}
