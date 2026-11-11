extern int func_095100(void);
extern void func_0A3680(void *);
extern void func_0A3900(void *, void *, int, int, void *, void *, void *);

void func_0A3800(void *a, void *b, void *c, void *d, void *e)
{
    if (func_095100())
        func_0A3680(0);
    else
        func_0A3900(a, b, 0xEF, 0x87, c, d, e);
}
