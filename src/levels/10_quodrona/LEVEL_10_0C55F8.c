/* LEVEL_10:0x0C55F8 -- placement copy of LEVEL_16_0B3760.c: placement copy of LEVEL_01_0C42A8.c: initializes a global object from a queried record. */
extern void func_0AF820(int id, void *buf, float f);
extern int func_0A9798(void *buf);
extern int func_0A97C8(void *buf);
extern int func_0A97F8(void *buf);
extern int func_0A98B0(void *buf);
extern void func_0AC4F8(void *obj, short a, short b, short c, short d, int e);
extern char *func_0A74F8(int);
extern void func_0C56E8(void);

typedef struct {
    char pad0[0x20];
    int flags;
    char pad1[0x15];
    char b39;
} D_00329368_t;

extern D_00329368_t D_00332768;
extern char *D_0020939C;

void func_0C55F8(void)
{
    char buf[16];
    short a, b, c, d;
    D_00329368_t *p;

    func_0AF820(0x1F9, buf, 0.0f);
    p = &D_00332768;
    a = (short)func_0A9798(buf);
    b = (short)func_0A97C8(buf);
    c = (short)func_0A97F8(buf);
    d = (short)func_0A98B0(buf);
    func_0AC4F8(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
    D_0020939C = func_0A74F8(0);
    func_0C56E8();
}
