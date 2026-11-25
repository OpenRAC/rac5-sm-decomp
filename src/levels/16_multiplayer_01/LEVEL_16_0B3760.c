/* LEVEL_16:0x0B3760 -- placement copy of LEVEL_01_0C42A8.c: initializes a global object from a queried record. */
extern void func_09CDF8(int id, void *buf, float f);
extern int func_096D10(void *buf);
extern int func_096D40(void *buf);
extern int func_096D70(void *buf);
extern int func_096E28(void *buf);
extern void func_099AD0(void *obj, short a, short b, short c, short d, int e);
extern int func_0956C0(void);
extern void func_0B3850(void);

typedef struct {
    char pad0[0x20];
    int flags;
    char pad1[0x15];
    char b39;
} D_00329368_t;

extern D_00329368_t D_002772A8;
extern char *D_001AE414;

void func_0B3760(void)
{
    char buf[16];
    short a, b, c, d;
    D_00329368_t *p;

    func_09CDF8(0x1F9, buf, 0.0f);
    p = &D_002772A8;
    a = (short)func_096D10(buf);
    b = (short)func_096D40(buf);
    c = (short)func_096D70(buf);
    d = (short)func_096E28(buf);
    func_099AD0(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
    D_001AE414 = ((char *(*)(int))func_0956C0)(0);
    func_0B3850();
}
