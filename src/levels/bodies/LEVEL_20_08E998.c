extern int func_080300(void);
extern void func_08E818(void *);
extern void func_08EA98(void *, void *, int, int, void *, void *, void *);

void func_08E998(void *a, void *b, void *c, void *d, void *e)
{
    if (func_080300())
        func_08E818(0);
    else
        func_08EA98(a, b, 0xEF, 0x87, c, d, e);
}
