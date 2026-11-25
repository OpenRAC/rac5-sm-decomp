/* LEVEL_21:0x0A48F0 -- placement copy of LEVEL_16_0B3760.c: placement copy of LEVEL_01_0C42A8.c: initializes a global object from a queried record. */
extern void func_08EFD0(int id, void *buf, float f);
extern int func_088F48(void *buf);
extern int func_088F78(void *buf);
extern int func_088FA8(void *buf);
extern int func_089060(void *buf);
extern void func_08BCA8(void *obj, short a, short b, short c, short d, int e);
extern char *func_086CA8(int);
extern void func_0A49E0(void);

typedef struct {
    char pad0[0x20];
    int flags;
    char pad1[0x15];
    char b39;
} D_00329368_t;

extern D_00329368_t D_00240BA8;
extern char *D_0015501C;

void func_0A48F0(void)
{
    char buf[16];
    short a, b, c, d;
    D_00329368_t *p;

    func_08EFD0(0x1F9, buf, 0.0f);
    p = &D_00240BA8;
    a = (short)func_088F48(buf);
    b = (short)func_088F78(buf);
    c = (short)func_088FA8(buf);
    d = (short)func_089060(buf);
    func_08BCA8(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
    D_0015501C = func_086CA8(0);
    func_0A49E0();
}
