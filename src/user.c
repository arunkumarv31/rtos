#include <stdio.h>

void function_1 ( void ) __attribute__ ( ( naked ) );
void function_2 ( void ) __attribute__ ( ( naked ) );
void function_3 ( void ) __attribute__ ( ( naked ) );

void function_1 ( void )
{
  while (1)
  {
    printf ( "I am in function 1\n" );
  }
}

void function_2 ( void )
{
  while (1)
  {
    printf ( "function 2\n" );
  }
}

void function_3 ( void )
{
  while (1)
  {
    printf ( "fun 3\n" );
  }
}
