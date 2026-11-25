/* LEVEL_22:0x0B6288 -- placement copy of LEVEL_24_0C16A0.c: placement copy of LEVEL_01_0C7DD8.c: resets the object, picks the label text by a probe flag, formats it into the shared buffer and registers three lookup results. */
extern unsigned char D_0015FFB0;
extern char *D_0015FF80;
extern int D_0015FF84;
extern int D_0015FF88;
extern char D_00281950[];

struct Obj;
extern void func_10CB48(struct Obj *p);
extern int func_10A3C8(void);
extern char *func_109980(int id);
extern int func_10ABF0(void);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_10CB98(struct Obj *p, int v);

void func_0B6288(struct Obj *o)
{
    int ret;

    func_10CB48(o);
    ret = func_10A3C8();
    D_0015FFB0 = ret;
    if (D_0015FFB0 != 0)
        sprintf(D_00281950, func_109980(0xA81), func_10ABF0());
    else
        sprintf(D_00281950, func_109980(0xA7E), func_10ABF0());
    D_0015FF80 = D_00281950;
    D_0015FF84 = (int)func_109980(0x30B);
    D_0015FF88 = (int)func_109980(0x218);
    func_10CB98(o, 0x18);
}
