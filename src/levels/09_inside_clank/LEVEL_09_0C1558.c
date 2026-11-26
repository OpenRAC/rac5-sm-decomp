/* LEVEL_09:0x0C1558 -- placement copy of LEVEL_16_0B3760.c: placement copy of LEVEL_01_0C42A8.c: initializes a global object from a queried record. */
extern void func_0AB9B8(int id, void *buf, float f);
extern int func_0A5930(void *buf);
extern int func_0A5960(void *buf);
extern int func_0A5990(void *buf);
extern int func_0A5A48(void *buf);
extern void func_0A8690(void *obj, short a, short b, short c, short d, int e);
extern char *func_0A3690(int);
extern void func_0C1648(void);

typedef struct {
    char pad0[0x20];
    int flags;
    char pad1[0x15];
    char b39;
} D_00329368_t;

extern D_00329368_t D_00310AE8;
extern char *D_001EA19C;

void func_0C1558(void)
{
    char buf[16];
    short a, b, c, d;
    D_00329368_t *p;

    func_0AB9B8(0x1F9, buf, 0.0f);
    p = &D_00310AE8;
    a = (short)func_0A5930(buf);
    b = (short)func_0A5960(buf);
    c = (short)func_0A5990(buf);
    d = (short)func_0A5A48(buf);
    func_0A8690(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
    D_001EA19C = func_0A3690(0);
    func_0C1648();
}
