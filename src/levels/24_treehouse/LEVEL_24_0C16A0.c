/* LEVEL_24:0x0C16A0 -- placement copy of LEVEL_01_0C7DD8.c: resets the object, picks the label text by a probe flag, formats it into the shared buffer and registers three lookup results. */
extern unsigned char D_001D18B0;
extern char *D_001D1880;
extern int D_001D1884;
extern int D_001D1888;
extern char D_002F7C50[];

struct Obj;
extern void func_12B178(struct Obj *p);
extern int func_1289F8(void);
extern char *func_127FB0(int id);
extern int func_129220(void);
extern int sprintf(char *buf, const char *fmt, ...);
extern void func_12B1C8(struct Obj *p, int v);

void func_0C16A0(struct Obj *o)
{
    int ret;

    func_12B178(o);
    ret = func_1289F8();
    D_001D18B0 = ret;
    if (D_001D18B0 != 0)
        sprintf(D_002F7C50, func_127FB0(0xA81), func_129220());
    else
        sprintf(D_002F7C50, func_127FB0(0xA7E), func_129220());
    D_001D1880 = D_002F7C50;
    D_001D1884 = (int)func_127FB0(0x30B);
    D_001D1888 = (int)func_127FB0(0x218);
    func_12B1C8(o, 0x18);
}
