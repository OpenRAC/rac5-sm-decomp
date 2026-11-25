/* LEVEL_04:0x0C9AC0 -- placement copy of LEVEL_16_0B3760.c: placement copy of LEVEL_01_0C42A8.c: initializes a global object from a queried record. */
extern void func_0B3958(int id, void *buf, float f);
extern int func_0AD890(void *buf);
extern int func_0AD8C0(void *buf);
extern int func_0AD8F0(void *buf);
extern int func_0AD9A8(void *buf);
extern void func_0B0630(void *obj, short a, short b, short c, short d, int e);
extern char *func_0AB5F0(int);
extern void func_0C9BB0(void);

typedef struct {
    char pad0[0x20];
    int flags;
    char pad1[0x15];
    char b39;
} D_00329368_t;

extern D_00329368_t D_00343B68;
extern char *D_0021985C;

void func_0C9AC0(void)
{
    char buf[16];
    short a, b, c, d;
    D_00329368_t *p;

    func_0B3958(0x1F9, buf, 0.0f);
    p = &D_00343B68;
    a = (short)func_0AD890(buf);
    b = (short)func_0AD8C0(buf);
    c = (short)func_0AD8F0(buf);
    d = (short)func_0AD9A8(buf);
    func_0B0630(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
    D_0021985C = func_0AB5F0(0);
    func_0C9BB0();
}
