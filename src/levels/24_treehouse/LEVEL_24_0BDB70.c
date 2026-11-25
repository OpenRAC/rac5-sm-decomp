/* LEVEL_24:0x0BDB70 -- placement copy of LEVEL_16_0B3760.c: placement copy of LEVEL_01_0C42A8.c: initializes a global object from a queried record. */
extern void func_0A7F80(int id, void *buf, float f);
extern int func_0A1EF8(void *buf);
extern int func_0A1F28(void *buf);
extern int func_0A1F58(void *buf);
extern int func_0A2010(void *buf);
extern void func_0A4C58(void *obj, short a, short b, short c, short d, int e);
extern char *func_09FC58(int);
extern void func_0BDC60(void);

typedef struct {
    char pad0[0x20];
    int flags;
    char pad1[0x15];
    char b39;
} D_00329368_t;

extern D_00329368_t D_002F5228;
extern char *D_001D101C;

void func_0BDB70(void)
{
    char buf[16];
    short a, b, c, d;
    D_00329368_t *p;

    func_0A7F80(0x1F9, buf, 0.0f);
    p = &D_002F5228;
    a = (short)func_0A1EF8(buf);
    b = (short)func_0A1F28(buf);
    c = (short)func_0A1F58(buf);
    d = (short)func_0A2010(buf);
    func_0A4C58(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
    D_001D101C = func_09FC58(0);
    func_0BDC60();
}
