#include <errno.h>
#include <stdlib.h>
#include "coroutine_int.h"

void rs_init(struct rs *rs)
{
    // setup the top buffer
    rs->top = -1;
    rs->s_size = STACKBUFFER_SIZE - 1;
}

static inline unsigned int __stackbuffer_unused(struct rs *rs)
{
    return rs-> s_size - (rs->top);
}

// push
int rs_push(struct rs *rs, struct task_struct *task)
{
    if (!__stackbuffer_unused(rs))
        return -EAGAIN;

    rs->top++;
    rs->r[rs->top] = task;

    return 0;
}

// pop
struct task_struct *rs_pop(struct rs *rs)
{
    struct task_struct *rev;

    if (rs->top == -1)
        return NULL;

    rev = rs->r[rs->top];
    rs->top--;

    return rev;
}
