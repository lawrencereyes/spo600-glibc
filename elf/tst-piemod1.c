#include <stdio.h>

int
foo (void)
{
  return 21;
}

static int
do_test (void)
{
  int val = foo ();
  if (val != 34)
    {
      printf ("foo () returned %d\n", val);
      return 1;
    }

  return 0;
}

#define TEST_FUNCTION do_test ()
#include "../test-skeleton.c"
