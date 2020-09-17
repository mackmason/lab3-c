// Author: Mack Mason mjm8542@psu.edu
// Collaborator: Bakhtiar Reza bmr5782@psu.edu
// Collaborator: Eric Beardslee eab6024@psu.edu
// Collaborator: Tong Chen
// Section: 4
// Breakout: 12

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int sum_n(int n)
  {
  if (n <= 0) 
  {
    return 0;
    }
  else 
  {
    return n + sum_n(n-1);
    }
  }

void print_n(const char *s, int n)
{
  if (n == 0) 
  {
    return;
  }
  if (n == 1)
  {
   printf("%s\n", s);
  }
  else
  {
    printf("%s\n", s);
    print_n(s, n-1);
  }
}

void run() 
{

  char *sumNumber = readline("Enter an int: ");
  int sumIntNumber = atoi(sumNumber);
  int sumNewNumber = sum_n(sumIntNumber);
  printf("sum is %i.\n",sumNewNumber);
  char *printString = readline("Enter a string: ");
  print_n(printString,sumIntNumber);

}

int main(void) 
{

run();
return 0;

}