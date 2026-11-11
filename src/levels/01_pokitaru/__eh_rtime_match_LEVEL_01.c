/* LEVEL_01:0x1EB8D0 -- asks the current handler object to process the argument and reports whether it did. */
typedef struct Handler { int (*fn)(struct Handler *self, int arg, int mode); } Handler;
extern int func_1EB560(void);
int __eh_rtime_match(int arg)
{
    Handler *h = *(Handler **)func_1EB560();
    int r;
    if (h->fn == 0) { r = 0; } else { r = h->fn(h, arg, 0) != 0; }
    return r;
}
