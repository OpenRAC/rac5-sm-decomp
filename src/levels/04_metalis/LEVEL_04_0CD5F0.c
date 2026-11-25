/* LEVEL_04:0x0CD5F0 -- placement copy of LEVEL_24_0C16A0.c: placement copy of LEVEL_01_0C7DD8.c: resets the object, picks the label text by a probe flag, formats it into the shared buffer and registers three lookup results. */
extern unsigned char D_0021A0F0;
extern char *D_0021A0C0;
extern int D_0021A0C4;
extern int D_0021A0C8;
extern char D_00346590[];

struct Obj;
extern void func_141AF8(struct Obj *p);
extern int func_13F378(void);
extern char *func_13E930(int id);
extern int func_13FBA0(void);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_141B48(struct Obj *p, int v);

void func_0CD5F0(struct Obj *o)
{
    int ret;

    func_141AF8(o);
    ret = func_13F378();
    D_0021A0F0 = ret;
    if (D_0021A0F0 != 0)
        sprintf(D_00346590, func_13E930(0xA81), func_13FBA0());
    else
        sprintf(D_00346590, func_13E930(0xA7E), func_13FBA0());
    D_0021A0C0 = D_00346590;
    D_0021A0C4 = (int)func_13E930(0x30B);
    D_0021A0C8 = (int)func_13E930(0x218);
    func_141B48(o, 0x18);
}
