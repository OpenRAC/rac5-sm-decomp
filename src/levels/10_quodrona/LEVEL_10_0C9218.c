/* LEVEL_10:0x0C9218 -- placement copy of LEVEL_24_0C16A0.c: placement copy of LEVEL_01_0C7DD8.c: resets the object, picks the label text by a probe flag, formats it into the shared buffer and registers three lookup results. */
extern unsigned char D_00209C30;
extern char *D_00209C00;
extern int D_00209C04;
extern int D_00209C08;
extern char D_00335190[];

struct Obj;
extern void func_1334F8(struct Obj *p);
extern int func_130D58(void);
extern char *func_130310(int id);
extern int func_1315A0(void);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_133548(struct Obj *p, int v);

void func_0C9218(struct Obj *o)
{
    int ret;

    func_1334F8(o);
    ret = func_130D58();
    D_00209C30 = ret;
    if (D_00209C30 != 0)
        sprintf(D_00335190, func_130310(0xA81), func_1315A0());
    else
        sprintf(D_00335190, func_130310(0xA7E), func_1315A0());
    D_00209C00 = D_00335190;
    D_00209C04 = (int)func_130310(0x30B);
    D_00209C08 = (int)func_130310(0x218);
    func_133548(o, 0x18);
}
