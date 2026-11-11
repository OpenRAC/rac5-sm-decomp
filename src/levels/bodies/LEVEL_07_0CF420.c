/* LEVEL_07:0x0CF420 -- placement copy of LEVEL_01_0CD3C0.c: initialises the scene object and registers seven table entries. */

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

extern struct Obj D_00341A18;
extern struct Tab D_00228F10[];
extern char D_00215F48[];

extern void func_0BBB98(struct Obj *o, char *a, int b, int c);
extern void func_0B0708(int a, void *buf, float f);
extern void func_0BBEF0(struct Obj *o, int a, int b, int c, int d);
extern void func_0BBED8(struct Obj *o, int a, unsigned int b);
extern int func_0BB9F8(struct Obj *o, int a, int b);
extern int func_0BBAD8(struct Obj *o, int a, int b);
extern int func_0BC2A0(int a, int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_0BBC70(struct Obj *o);

void func_0CF420(void)
{
    int buf[4];
    unsigned int i;

    func_0BBB98(&D_00341A18, D_00215F48, 0x1000, 0);
    func_0B0708(0x277, buf, 0.0f);
    func_0BBEF0(&D_00341A18, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0BBED8(&D_00341A18, 0x276, 0xFFFFFFFF);
    func_0BB9F8(&D_00341A18, 0x40602020, 0xFFB07050);
    for (i = 0; i < 7; i++) {
        func_0BBAD8(&D_00341A18, 1, 1);
        if (D_00228F10[i].w_00 != 6) {
            func_0BC2A0((int)&D_00341A18, D_00228F10[i].w_08, i, 0, 0, 0, 0, 0, 0xFFFFFFFF);
        }
    }
    D_00341A18.flags_14 |= 0x14;
    func_0BBC70(&D_00341A18);
}
