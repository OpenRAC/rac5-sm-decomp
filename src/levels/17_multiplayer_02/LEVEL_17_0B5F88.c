/* LEVEL_17:0x0B5F88 -- placement copy of LEVEL_24_0C16A0.c: placement copy of LEVEL_01_0C7DD8.c: resets the object, picks the label text by a probe flag, formats it into the shared buffer and registers three lookup results. */
extern unsigned char D_001A22A8;
extern char *D_001A2278;
extern int D_001A227C;
extern int D_001A2280;
extern char D_0026AFD0[];

struct Obj;
extern void func_1112C0(struct Obj *p);
extern int func_10F268(void);
extern char *func_10E8A8(int id);
extern int func_10FA00(void);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_111310(struct Obj *p, int v);

void func_0B5F88(struct Obj *o)
{
    int ret;

    func_1112C0(o);
    ret = func_10F268();
    D_001A22A8 = ret;
    if (D_001A22A8 != 0)
        sprintf(D_0026AFD0, func_10E8A8(0xA81), func_10FA00());
    else
        sprintf(D_0026AFD0, func_10E8A8(0xA7E), func_10FA00());
    D_001A2278 = D_0026AFD0;
    D_001A227C = (int)func_10E8A8(0x30B);
    D_001A2280 = (int)func_10E8A8(0x218);
    func_111310(o, 0x18);
}
