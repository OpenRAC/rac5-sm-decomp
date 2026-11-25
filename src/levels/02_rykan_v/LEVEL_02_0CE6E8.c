/* LEVEL_02:0x0CE6E8 -- placement copy of LEVEL_24_0C16A0.c: placement copy of LEVEL_01_0C7DD8.c: resets the object, picks the label text by a probe flag, formats it into the shared buffer and registers three lookup results. */
extern unsigned char D_00215BF0;
extern char *D_00215BC0;
extern int D_00215BC4;
extern int D_00215BC8;
extern char D_00343290[];

struct Obj;
extern void func_13BA28(struct Obj *p);
extern int func_1392A8(void);
extern char *func_138860(int id);
extern int func_139AD0(void);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_13BA78(struct Obj *p, int v);

void func_0CE6E8(struct Obj *o)
{
    int ret;

    func_13BA28(o);
    ret = func_1392A8();
    D_00215BF0 = ret;
    if (D_00215BF0 != 0)
        sprintf(D_00343290, func_138860(0xA81), func_139AD0());
    else
        sprintf(D_00343290, func_138860(0xA7E), func_139AD0());
    D_00215BC0 = D_00343290;
    D_00215BC4 = (int)func_138860(0x30B);
    D_00215BC8 = (int)func_138860(0x218);
    func_13BA78(o, 0x18);
}
