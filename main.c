// Fibonacci sequence in C using while and if else statement

#include <stdio.h>

int main()
{
  // declare variables integer x, Next, first value [0], second value [1]
  int no, x = 0, Next, f_v = 0, s_v = 1;
  // prompt user input
  printf("\n Enter Fibonacci Range: ");
  // accept user input
  scanf("%d" ,&no);

  // start at x = 0 returns true
  while(x < no)
  {
    // if x is less than/equal to 1 assign Next (true), exit statement and return print value 0
    // if value greater proceed to else statement eg 2  line 23
    if(x <= 1)
    {
      Next = x;
    }
    else
    {
      // execute Next [first value 0 + second value 1 = 1]
      Next = f_v + s_v;
      // [first value = second value = 1]
      f_v = s_v;
      // [second value  = Next = 1]
      s_v = Next;
    }
    // return print value 0 1 if input greater than 1
    printf("%d \t", Next);
    // increment displayed values based on user input of greater than 1
    x++;
  }
  return 0;
}