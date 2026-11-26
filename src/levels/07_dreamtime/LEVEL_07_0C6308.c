/* LEVEL_07:0x0C6308 -- placement copy of LEVEL_16_0B3760.c: placement copy of LEVEL_01_0C42A8.c: initializes a global object from a queried record. */
extern void func_0B0708(int id, void *buf, float f);
extern int func_0AA680(void *buf);
extern int func_0AA6B0(void *buf);
extern int func_0AA6E0(void *buf);
extern int func_0AA798(void *buf);
extern void func_0AD3E0(void *obj, short a, short b, short c, short d, int e);
extern char *func_0A83E0(int);
extern void func_0C63F8(void);

typedef struct {
    char pad0[0x20];
    int flags;
    char pad1[0x15];
    char b39;
} D_00329368_t;

extern D_00329368_t D_0033EC68;
extern char *D_0021469C;

void func_0C6308(void)
{
    char buf[16];
    short a, b, c, d;
    D_00329368_t *p;

    func_0B0708(0x1F9, buf, 0.0f);
    p = &D_0033EC68;
    a = (short)func_0AA680(buf);
    b = (short)func_0AA6B0(buf);
    c = (short)func_0AA6E0(buf);
    d = (short)func_0AA798(buf);
    func_0AD3E0(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
    D_0021469C = func_0A83E0(0);
    func_0C63F8();
}
