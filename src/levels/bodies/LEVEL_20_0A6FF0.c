/* LEVEL_20:0x0A6FF0 -- placement copy of LEVEL_01_0CD3C0.c: initialises the scene object and registers seven table entries. */

struct Tab {
    int w_00;
    int w_04;
    int w_08;
    int w_0C;
};

struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

extern struct Obj D_0019D9D8;
extern struct Tab D_0012A150[];
extern char D_001121D8[];

extern void func_0930B8(struct Obj *o, char *a, int b, int c);
extern void func_0874F0(int a, void *buf, float f);
extern void func_093410(struct Obj *o, int a, int b, int c, int d);
extern void func_0933F8(struct Obj *o, int a, unsigned int b);
extern int func_092F18(struct Obj *o, int a, int b);
extern int func_092FF8(struct Obj *o, int a, int b);
extern void func_0937C0(int a, int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_093190(struct Obj *o);

void func_0A6FF0(void)
{
    int buf[4];
    unsigned int i;

    func_0930B8(&D_0019D9D8, D_001121D8, 0x1000, 0);
    func_0874F0(0x277, buf, 0.0f);
    func_093410(&D_0019D9D8, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0933F8(&D_0019D9D8, 0x276, 0xFFFFFFFF);
    func_092F18(&D_0019D9D8, 0x40602020, 0xFFB07050);
    for (i = 0; i < 7; i++) {
        func_092FF8(&D_0019D9D8, 1, 1);
        if (D_0012A150[i].w_00 != 6) {
            func_0937C0((int)&D_0019D9D8, D_0012A150[i].w_08, i, 0, 0, 0, 0, 0, 0xFFFFFFFF);
        }
    }
    D_0019D9D8.flags_14 |= 0x14;
    func_093190(&D_0019D9D8);
}
