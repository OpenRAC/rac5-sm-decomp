/* LEVEL_20:0x0A0F78 -- placement copy of LEVEL_24_0C16A0.c: placement copy of LEVEL_01_0C7DD8.c: resets the object, picks the label text by a probe flag, formats it into the shared buffer and registers three lookup results. */
extern unsigned char D_00111388;
extern char *D_00111358;
extern int D_0011135C;
extern int D_00111360;
extern char D_0019D510[];

struct Obj;
extern void func_0E4B30(struct Obj *p);
extern int func_0E2AD8(void);
extern char *func_0E2118(int id);
extern int func_0E3270(void);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0E4B80(struct Obj *p, int v);

void func_0A0F78(struct Obj *o)
{
    int ret;

    func_0E4B30(o);
    ret = func_0E2AD8();
    D_00111388 = ret;
    if (D_00111388 != 0)
        sprintf(D_0019D510, func_0E2118(0xA81), func_0E3270());
    else
        sprintf(D_0019D510, func_0E2118(0xA7E), func_0E3270());
    D_00111358 = D_0019D510;
    D_0011135C = (int)func_0E2118(0x30B);
    D_00111360 = (int)func_0E2118(0x218);
    func_0E4B80(o, 0x18);
}
