/* LEVEL_16:0x0B6A48 -- placement copy of LEVEL_24_0C16A0.c: placement copy of LEVEL_01_0C7DD8.c: resets the object, picks the label text by a probe flag, formats it into the shared buffer and registers three lookup results. */
extern unsigned char D_001AECA8;
extern char *D_001AEC78;
extern int D_001AEC7C;
extern int D_001AEC80;
extern char D_00279CD0[];

struct Obj;
extern void func_111D48(struct Obj *p);
extern int func_10FCF0(void);
extern char *func_10F330(int id);
extern int func_110488(void);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_111D98(struct Obj *p, int v);

void func_0B6A48(struct Obj *o)
{
    int ret;

    func_111D48(o);
    ret = func_10FCF0();
    D_001AECA8 = ret;
    if (D_001AECA8 != 0)
        sprintf(D_00279CD0, func_10F330(0xA81), func_110488());
    else
        sprintf(D_00279CD0, func_10F330(0xA7E), func_110488());
    D_001AEC78 = D_00279CD0;
    D_001AEC7C = (int)func_10F330(0x30B);
    D_001AEC80 = (int)func_10F330(0x218);
    func_111D98(o, 0x18);
}
