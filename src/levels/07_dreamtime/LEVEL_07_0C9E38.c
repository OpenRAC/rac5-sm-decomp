/* LEVEL_07:0x0C9E38 -- placement copy of LEVEL_24_0C16A0.c: placement copy of LEVEL_01_0C7DD8.c: resets the object, picks the label text by a probe flag, formats it into the shared buffer and registers three lookup results. */
extern unsigned char D_00214F30;
extern char *D_00214F00;
extern int D_00214F04;
extern int D_00214F08;
extern char D_00341690[];

struct Obj;
extern void func_138678(struct Obj *p);
extern int func_135EF8(void);
extern char *func_1354B0(int id);
extern int func_136720(void);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_1386C8(struct Obj *p, int v);

void func_0C9E38(struct Obj *o)
{
    int ret;

    func_138678(o);
    ret = func_135EF8();
    D_00214F30 = ret;
    if (D_00214F30 != 0)
        sprintf(D_00341690, func_1354B0(0xA81), func_136720());
    else
        sprintf(D_00341690, func_1354B0(0xA7E), func_136720());
    D_00214F00 = D_00341690;
    D_00214F04 = (int)func_1354B0(0x30B);
    D_00214F08 = (int)func_1354B0(0x218);
    func_1386C8(o, 0x18);
}
