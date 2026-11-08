extern int func_09E0A0(void);
extern void func_0AC068(void *);
extern void func_0AC2E8(void *, void *, int, int, void *, void *, void *);

void func_0AC1E8(void *a, void *b, void *c, void *d, void *e)
{
    if (func_09E0A0())
        func_0AC068(0);
    else
        func_0AC2E8(a, b, 0xEF, 0x87, c, d, e);
}
