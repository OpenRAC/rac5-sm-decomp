/* LEVEL_16:0x0BCAC0 -- placement copy of LEVEL_01_0CD3C0.c: initialises the scene object and registers seven table entries. */

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

extern struct Obj D_0027A198;
extern struct Tab D_001C90D0[];
extern char D_001AFAF8[];

extern void func_0A8B88(struct Obj *o, char *a, int b, int c);
extern void func_09CDF8(int a, void *buf, float f);
extern void func_0A8EE0(struct Obj *o, int a, int b, int c, int d);
extern void func_0A8EC8(struct Obj *o, int a, unsigned int b);
extern int func_0A89E8(struct Obj *o, int a, int b);
extern int func_0A8AC8(struct Obj *o, int a, int b);
extern int func_0A9290(int a, int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_0A8C60(struct Obj *o);

void func_0BCAC0(void)
{
    int buf[4];
    unsigned int i;

    func_0A8B88(&D_0027A198, D_001AFAF8, 0x1000, 0);
    func_09CDF8(0x277, buf, 0.0f);
    func_0A8EE0(&D_0027A198, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0A8EC8(&D_0027A198, 0x276, 0xFFFFFFFF);
    func_0A89E8(&D_0027A198, 0x40602020, 0xFFB07050);
    for (i = 0; i < 7; i++) {
        func_0A8AC8(&D_0027A198, 1, 1);
        if (D_001C90D0[i].w_00 != 6) {
            func_0A9290((int)&D_0027A198, D_001C90D0[i].w_08, i, 0, 0, 0, 0, 0, 0xFFFFFFFF);
        }
    }
    D_0027A198.flags_14 |= 0x14;
    func_0A8C60(&D_0027A198);
}
