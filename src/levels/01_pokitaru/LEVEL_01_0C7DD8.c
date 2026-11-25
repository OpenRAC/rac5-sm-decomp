/* LEVEL_01:0x0C7DD8 -- placement copy of LEVEL_24_0C16A0.c: placement copy of LEVEL_01_0C7DD8.c: resets the object, picks the label text by a probe flag, formats it into the shared buffer and registers three lookup results. */
extern unsigned char D_00200C30;
extern char *D_00200C00;
extern int D_00200C04;
extern int D_00200C08;
extern char D_0032BD90[];

struct Obj;
extern void func_135678(struct Obj *p);
extern int func_132EF8(void);
extern char *func_1324B0(int id);
extern int func_133720(void);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_1356C8(struct Obj *p, int v);

void func_0C7DD8(struct Obj *o)
{
    int ret;

    func_135678(o);
    ret = func_132EF8();
    D_00200C30 = ret;
    if (D_00200C30 != 0)
        sprintf(D_0032BD90, func_1324B0(0xA81), func_133720());
    else
        sprintf(D_0032BD90, func_1324B0(0xA7E), func_133720());
    D_00200C00 = D_0032BD90;
    D_00200C04 = (int)func_1324B0(0x30B);
    D_00200C08 = (int)func_1324B0(0x218);
    func_1356C8(o, 0x18);
}
