/* LEVEL_15:0x1405C8 -- placement copy of LEVEL_01_1EB8D0.c: asks the current handler object to process the argument and reports whether it did. */
typedef struct Handler { int (*fn)(struct Handler *self, int arg, int mode); } Handler;
extern int func_140258(void);
int __eh_rtime_match(int arg)
{
    Handler *h = *(Handler **)func_140258();
    int r;
    if (h->fn == 0) { r = 0; } else { r = h->fn(h, arg, 0) != 0; }
    return r;
}
