/* LEVEL_08:0x0D2D00 -- placement copy of LEVEL_24_0C16A0.c: placement copy of LEVEL_01_0C7DD8.c: resets the object, picks the label text by a probe flag, formats it into the shared buffer and registers three lookup results. */
extern unsigned char D_00249AF0;
extern char *D_00249AC0;
extern int D_00249AC4;
extern int D_00249AC8;
extern char D_0037B010[];

struct Obj;
extern void func_146BB0(struct Obj *p);
extern int func_144430(void);
extern char *func_1439E8(int id);
extern int func_144C58(void);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_146C00(struct Obj *p, int v);

void func_0D2D00(struct Obj *o)
{
    int ret;

    func_146BB0(o);
    ret = func_144430();
    D_00249AF0 = ret;
    if (D_00249AF0 != 0)
        sprintf(D_0037B010, func_1439E8(0xA81), func_144C58());
    else
        sprintf(D_0037B010, func_1439E8(0xA7E), func_144C58());
    D_00249AC0 = D_0037B010;
    D_00249AC4 = (int)func_1439E8(0x30B);
    D_00249AC8 = (int)func_1439E8(0x218);
    func_146C00(o, 0x18);
}
