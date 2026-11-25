/* LEVEL_18:0x0B2738 -- placement copy of LEVEL_16_0B3760.c: placement copy of LEVEL_01_0C42A8.c: initializes a global object from a queried record. */
extern void func_09BE08(int id, void *buf, float f);
extern int func_095D20(void *buf);
extern int func_095D50(void *buf);
extern int func_095D80(void *buf);
extern int func_095E38(void *buf);
extern void func_098AE0(void *obj, short a, short b, short c, short d, int e);
extern int func_0946D0(void);
extern void func_0B2828(void);

typedef struct {
    char pad0[0x20];
    int flags;
    char pad1[0x15];
    char b39;
} D_00329368_t;

extern D_00329368_t D_00277628;
extern char *D_001AF894;

void func_0B2738(void)
{
    char buf[16];
    short a, b, c, d;
    D_00329368_t *p;

    func_09BE08(0x1F9, buf, 0.0f);
    p = &D_00277628;
    a = (short)func_095D20(buf);
    b = (short)func_095D50(buf);
    c = (short)func_095D80(buf);
    d = (short)func_095E38(buf);
    func_098AE0(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
    D_001AF894 = ((char *(*)(int))func_0946D0)(0);
    func_0B2828();
}
