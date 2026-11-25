/* LEVEL_21:0x0A8420 -- placement copy of LEVEL_24_0C16A0.c: placement copy of LEVEL_01_0C7DD8.c: resets the object, picks the label text by a probe flag, formats it into the shared buffer and registers three lookup results. */
extern unsigned char D_001558B0;
extern char *D_00155880;
extern int D_00155884;
extern int D_00155888;
extern char D_002435D0[];

struct Obj;
extern void func_0F4540(struct Obj *p);
extern int func_0F1DC0(void);
extern char *func_0F1378(int id);
extern int func_0F25E8(void);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_0F4590(struct Obj *p, int v);

void func_0A8420(struct Obj *o)
{
    int ret;

    func_0F4540(o);
    ret = func_0F1DC0();
    D_001558B0 = ret;
    if (D_001558B0 != 0)
        sprintf(D_002435D0, func_0F1378(0xA81), func_0F25E8());
    else
        sprintf(D_002435D0, func_0F1378(0xA7E), func_0F25E8());
    D_00155880 = D_002435D0;
    D_00155884 = (int)func_0F1378(0x30B);
    D_00155888 = (int)func_0F1378(0x218);
    func_0F4590(o, 0x18);
}
