/* LEVEL_19:0x0B6320 -- placement copy of LEVEL_24_0C16A0.c: placement copy of LEVEL_01_0C7DD8.c: resets the object, picks the label text by a probe flag, formats it into the shared buffer and registers three lookup results. */
extern unsigned char D_001AFE28;
extern char *D_001AFDF8;
extern int D_001AFDFC;
extern int D_001AFE00;
extern char D_00279E50[];

struct Obj;
extern void func_1123E8(struct Obj *p);
extern int func_110390(void);
extern char *func_10F9D0(int id);
extern int func_110B28(void);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_112438(struct Obj *p, int v);

void func_0B6320(struct Obj *o)
{
    int ret;

    func_1123E8(o);
    ret = func_110390();
    D_001AFE28 = ret;
    if (D_001AFE28 != 0)
        sprintf(D_00279E50, func_10F9D0(0xA81), func_110B28());
    else
        sprintf(D_00279E50, func_10F9D0(0xA7E), func_110B28());
    D_001AFDF8 = D_00279E50;
    D_001AFDFC = (int)func_10F9D0(0x30B);
    D_001AFE00 = (int)func_10F9D0(0x218);
    func_112438(o, 0x18);
}
