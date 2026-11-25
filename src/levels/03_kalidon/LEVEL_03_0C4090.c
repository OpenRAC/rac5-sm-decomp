/* LEVEL_03:0x0C4090 -- placement copy of LEVEL_16_0B3760.c: placement copy of LEVEL_01_0C42A8.c: initializes a global object from a queried record. */
extern void func_0AE488(int id, void *buf, float f);
extern int func_0A8400(void *buf);
extern int func_0A8430(void *buf);
extern int func_0A8460(void *buf);
extern int func_0A8518(void *buf);
extern void func_0AB160(void *obj, short a, short b, short c, short d, int e);
extern char *func_0A6160(int);
extern void func_0C4180(void);

typedef struct {
    char pad0[0x20];
    int flags;
    char pad1[0x15];
    char b39;
} D_00329368_t;

extern D_00329368_t D_003441E8;
extern char *D_00218A1C;

void func_0C4090(void)
{
    char buf[16];
    short a, b, c, d;
    D_00329368_t *p;

    func_0AE488(0x1F9, buf, 0.0f);
    p = &D_003441E8;
    a = (short)func_0A8400(buf);
    b = (short)func_0A8430(buf);
    c = (short)func_0A8460(buf);
    d = (short)func_0A8518(buf);
    func_0AB160(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
    D_00218A1C = func_0A6160(0);
    func_0C4180();
}
