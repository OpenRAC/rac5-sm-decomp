/* FRONTEND:0x017DF8 -- placement copy of LEVEL_24_0C16A0.c: placement copy of LEVEL_01_0C7DD8.c: resets the object, picks the label text by a probe flag, formats it into the shared buffer and registers three lookup results. */
extern unsigned char D_000304B0;
extern char *D_00030480;
extern int D_00030484;
extern int D_00030488;
extern char D_001973B8[];

struct Obj;
extern void func_022938(struct Obj *p);
extern int func_0208C8(void);
extern char *func_01F778(int id);
extern int func_0210B0(void);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_022988(struct Obj *p, int v);

void func_017DF8(struct Obj *o)
{
    int ret;

    func_022938(o);
    ret = func_0208C8();
    D_000304B0 = ret;
    if (D_000304B0 != 0)
        sprintf(D_001973B8, func_01F778(0xA81), func_0210B0());
    else
        sprintf(D_001973B8, func_01F778(0xA7E), func_0210B0());
    D_00030480 = D_001973B8;
    D_00030484 = (int)func_01F778(0x30B);
    D_00030488 = (int)func_01F778(0x218);
    func_022988(o, 0x18);
}
