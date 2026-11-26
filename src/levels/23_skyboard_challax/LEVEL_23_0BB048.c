/* LEVEL_23:0x0BB048 -- placement copy of LEVEL_16_0B3760.c: placement copy of LEVEL_01_0C42A8.c: initializes a global object from a queried record. */
extern void func_0A5478(int id, void *buf, float f);
extern int func_09F3F0(void *buf);
extern int func_09F420(void *buf);
extern int func_09F450(void *buf);
extern int func_09F508(void *buf);
extern void func_0A2150(void *obj, short a, short b, short c, short d, int e);
extern char *func_09D150(int);
extern void func_0BB138(void);

typedef struct {
    char pad0[0x20];
    int flags;
    char pad1[0x15];
    char b39;
} D_00329368_t;

extern D_00329368_t D_002FA7A8;
extern char *D_001D379C;

void func_0BB048(void)
{
    char buf[16];
    short a, b, c, d;
    D_00329368_t *p;

    func_0A5478(0x1F9, buf, 0.0f);
    p = &D_002FA7A8;
    a = (short)func_09F3F0(buf);
    b = (short)func_09F420(buf);
    c = (short)func_09F450(buf);
    d = (short)func_09F508(buf);
    func_0A2150(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
    D_001D379C = func_09D150(0);
    func_0BB138();
}
