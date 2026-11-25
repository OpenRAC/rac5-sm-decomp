/* LEVEL_18:0x0B5A20 -- placement copy of LEVEL_24_0C16A0.c: placement copy of LEVEL_01_0C7DD8.c: resets the object, picks the label text by a probe flag, formats it into the shared buffer and registers three lookup results. */
extern unsigned char D_001B0128;
extern char *D_001B00F8;
extern int D_001B00FC;
extern int D_001B0100;
extern char D_0027A050[];

struct Obj;
extern void func_1109F8(struct Obj *p);
extern int func_10E9A0(void);
extern char *func_10DFE0(int id);
extern int func_10F138(void);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_110A48(struct Obj *p, int v);

void func_0B5A20(struct Obj *o)
{
    int ret;

    func_1109F8(o);
    ret = func_10E9A0();
    D_001B0128 = ret;
    if (D_001B0128 != 0)
        sprintf(D_0027A050, func_10DFE0(0xA81), func_10F138());
    else
        sprintf(D_0027A050, func_10DFE0(0xA7E), func_10F138());
    D_001B00F8 = D_0027A050;
    D_001B00FC = (int)func_10DFE0(0x30B);
    D_001B0100 = (int)func_10DFE0(0x218);
    func_110A48(o, 0x18);
}
