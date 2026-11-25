/* LEVEL_03:0x0C7BC0 -- placement copy of LEVEL_24_0C16A0.c: placement copy of LEVEL_01_0C7DD8.c: resets the object, picks the label text by a probe flag, formats it into the shared buffer and registers three lookup results. */
extern unsigned char D_002192B0;
extern char *D_00219280;
extern int D_00219284;
extern int D_00219288;
extern char D_00346C10[];

struct Obj;
extern void func_133A40(struct Obj *p);
extern int func_1312C0(void);
extern char *func_130878(int id);
extern int func_131AE8(void);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_133A90(struct Obj *p, int v);

void func_0C7BC0(struct Obj *o)
{
    int ret;

    func_133A40(o);
    ret = func_1312C0();
    D_002192B0 = ret;
    if (D_002192B0 != 0)
        sprintf(D_00346C10, func_130878(0xA81), func_131AE8());
    else
        sprintf(D_00346C10, func_130878(0xA7E), func_131AE8());
    D_00219280 = D_00346C10;
    D_00219284 = (int)func_130878(0x30B);
    D_00219288 = (int)func_130878(0x218);
    func_133A90(o, 0x18);
}
