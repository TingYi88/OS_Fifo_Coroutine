#include <stdio.h>
#include <stdlib.h>

#include "coroutine.h"

COROUTINE_DEFINE(myjob)
{
    fprintf(stdout, "Executing my job...\n");
    VAR_DEFINE2(int, val1, val2);
    ARRAY_DEFINE(int, arr, 20);
    cr_begin();
    cr_set(val1, 2 /* value */);
    cr_set(arr, 2 /* value */, 3 /* index */);
    cr_yield();
    int temp = cr_dref(val1);
    temp = cr_dref(arr, 3 /* index */);
    fprintf(stdout, "Exiting...\n");
    cr_end();
}

int main(void)
{
  int crfd, tfd;
  
  crfd = coroutine_create(CR_FIFO);
  tfd = coroutine_add(crfd, myjob, NULL);
  coroutine_start(crfd);
  coroutine_join(crfd);
  
  return 0;
}
