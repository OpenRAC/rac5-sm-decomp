/* LEVEL_02:0x0CABB8 -- placement copy of LEVEL_16_0B3760.c: placement copy of LEVEL_01_0C42A8.c: initializes a global object from a queried record. */
extern void func_0B5018(int id, void *buf, float f);
extern int func_0AEF90(void *buf);
extern int func_0AEFC0(void *buf);
extern int func_0AEFF0(void *buf);
extern int func_0AF0A8(void *buf);
extern void func_0B1CF0(void *obj, short a, short b, short c, short d, int e);
extern char *func_0ACCF0(int);
extern void func_0CACA8(void);

typedef struct {
    char pad0[0x20];
    int flags;
    char pad1[0x15];
    char b39;
} D_00329368_t;

extern D_00329368_t D_00340868;
extern char *D_0021535C;

void func_0CABB8(void)
{
    char buf[16];
    short a, b, c, d;
    D_00329368_t *p;

    func_0B5018(0x1F9, buf, 0.0f);
    p = &D_00340868;
    a = (short)func_0AEF90(buf);
    b = (short)func_0AEFC0(buf);
    c = (short)func_0AEFF0(buf);
    d = (short)func_0AF0A8(buf);
    func_0B1CF0(p, a, b, c, d, 0x40602020);
    p->flags |= 0x840;
    p->b39 = 0;
    D_0021535C = func_0ACCF0(0);
    func_0CACA8();
}
