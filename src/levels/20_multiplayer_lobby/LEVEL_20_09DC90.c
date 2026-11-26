/* LEVEL_20:0x09DC90 -- placement copy of LEVEL_16_0B3760.c: placement copy of LEVEL_01_0C42A8.c: initializes a global object from a queried record. */
extern void func_0874F0(int id, void *buf, float f);
extern int func_081408(void *buf);
extern int func_081438(void *buf);
extern int func_081468(void *buf);
extern int func_081520(void *buf);
extern void func_0841C8(void *obj, short a, short b, short c, short d, int e);
extern int func_07FDB8(void);
extern void func_09DD80(void);

typedef struct {
    char pad0[0x20];
    int flags;
    char pad1[0x15];
    char b39;
} D_00329368_t;

extern D_00329368_t D_0019AAE8;
extern char *D_00110AF4;

void func_09DC90(void)
{
    char buf[16];
    short a, b, c, d;
    D_00329368_t *p;

    func_0874F0(0x1F9, buf, 0.0f);
    p = &D_0019AAE8;
    a = (short)func_081408(buf);
    b = (short)func_081438(buf);
    c = (short)func_081468(buf);
    d = (short)func_081520(buf);
    func_0841C8(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
    D_00110AF4 = ((char *(*)(int))func_07FDB8)(0);
    func_09DD80();
}
