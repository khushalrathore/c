#include <stdio.h>
#define NL printf("\n")
//& -> reference /address e.g &a;
//* -> pointer/points to the content e.g *a;
//*& -> points to the content of this address e.g *(&a);

#pragma region functions

char *name = "John";
void pointing_it_to_a_variable() {
  int var = 1;
  int *pointer_to_a = &var;

  var++;
  // OR
  *pointer_to_a += 1;
  // both increases var by 1
  // since pointer_to_a is (variable which has address of var, i.e.) a pointer
  // variable, so it can also update var

  printf("The value var is %d\n", var);
  printf("The value of var is also %d\n", *pointer_to_a);
}

void printUsingPointer() {
  char vowels[] = {'A', 'E', 'I', 'O', 'U'};
  char *pvowels = vowels;
  int i = 0;
  int j;

  while (i++ < 5) {
    printf("&vowels[%d]: %p, pvowels + %d: %p, vowels + %d: %p\n", i,
           &vowels[i], i, pvowels + i, i, vowels + i);
  }

  printf("\n");
  for (i = 0; i < 5; i++) {
    printf("vowels[%d]: %c, *(pvowels + %d): %c, *(vowels + %d): %c\n", i,
           vowels[i], i, *(pvowels + i), i, *(vowels + i));
  }
}

#pragma endregion

void display() {
  int a = 5;
  int z = 20;

  printf("\na\t:\t%d\n", a);
  printf(
      "&a\t:\t%p\n",
      (void *)&a);  // using (void *) is a good practice.... &a will do the work
  printf("*(&a)\t:\t%d\n", *(&a));
  NL;
  printf("z\t:\t%d\n", z);
  printf("&z\t:\t%p\n", (void *)&z);
  printf("*(&z)\t:\t%d\n", *(&z));

  int *p = &a;
  int *q = &z;

  NL;
  NL;

  printf("Before swapping >\t\n");
  printf("a\t:\t%d\n", a);
  printf("z\t:\t%d\n", z);
  *p = *p ^ *q;
  *q = *q ^ *p;
  *p = *p ^ *q;
  printf("After  swapping >\t\n");
  printf("a\t:\t%d\n", a);
  printf("z\t:\t%d\n", z);
  NL;
  pointing_it_to_a_variable();
}

int main() {
  // display();
  printUsingPointer();
  return 0;
}
