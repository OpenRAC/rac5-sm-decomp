/* LEVEL_17:0x0B2CA0 -- placement copy of LEVEL_16_0B3760.c: placement copy of LEVEL_01_0C42A8.c: initializes a global object from a queried record. */
extern void func_09C2F0(int id, void *buf, float f);
extern int func_096208(void *buf);
extern int func_096238(void *buf);
extern int func_096268(void *buf);
extern int func_096320(void *buf);
extern void func_098FC8(void *obj, short a, short b, short c, short d, int e);
extern int func_094BB8(void);
extern void func_0B2D90(void);

typedef struct {
    char pad0[0x20];
    int flags;
    char pad1[0x15];
    char b39;
} D_00329368_t;

extern D_00329368_t D_002685A8;
extern char *D_001A1A14;

void func_0B2CA0(void)
{
    char buf[16];
    short a, b, c, d;
    D_00329368_t *p;

    func_09C2F0(0x1F9, buf, 0.0f);
    p = &D_002685A8;
    a = (short)func_096208(buf);
    b = (short)func_096238(buf);
    c = (short)func_096268(buf);
    d = (short)func_096320(buf);
    func_098FC8(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
    D_001A1A14 = ((char *(*)(int))func_094BB8)(0);
    func_0B2D90();
}
