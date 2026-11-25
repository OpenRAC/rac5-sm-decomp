/* LEVEL_23:0x0BEB78 -- placement copy of LEVEL_24_0C16A0.c: placement copy of LEVEL_01_0C7DD8.c: resets the object, picks the label text by a probe flag, formats it into the shared buffer and registers three lookup results. */
extern unsigned char D_001D4030;
extern char *D_001D4000;
extern int D_001D4004;
extern int D_001D4008;
extern char D_002FD1D0[];

struct Obj;
extern void func_126DF0(struct Obj *p);
extern int func_124670(void);
extern char *func_123C28(int id);
extern int func_124E98(void);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_126E40(struct Obj *p, int v);

void func_0BEB78(struct Obj *o)
{
    int ret;

    func_126DF0(o);
    ret = func_124670();
    D_001D4030 = ret;
    if (D_001D4030 != 0)
        sprintf(D_002FD1D0, func_123C28(0xA81), func_124E98());
    else
        sprintf(D_002FD1D0, func_123C28(0xA7E), func_124E98());
    D_001D4000 = D_002FD1D0;
    D_001D4004 = (int)func_123C28(0x30B);
    D_001D4008 = (int)func_123C28(0x218);
    func_126E40(o, 0x18);
}
