/* LEVEL_10:0x0CE800 -- placement copy of LEVEL_01_0CD3C0.c: initialises the scene object and registers seven table entries. */

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

extern struct Obj D_00335518;
extern struct Tab D_0021D190[];
extern char D_0020AC48[];

extern void func_0BAE80(struct Obj *o, char *a, int b, int c);
extern void func_0AF820(int a, void *buf, float f);
extern void func_0BB1D8(struct Obj *o, int a, int b, int c, int d);
extern void func_0BB1C0(struct Obj *o, int a, unsigned int b);
extern int func_0BACE0(struct Obj *o, int a, int b);
extern int func_0BADC0(struct Obj *o, int a, int b);
extern int func_0BB588(int a, int b, int c, int d, int e, int f, int g, int h, unsigned int i);
extern int func_0BAF58(struct Obj *o);

void func_0CE800(void)
{
    int buf[4];
    unsigned int i;

    func_0BAE80(&D_00335518, D_0020AC48, 0x1000, 0);
    func_0AF820(0x277, buf, 0.0f);
    func_0BB1D8(&D_00335518, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0BB1C0(&D_00335518, 0x276, 0xFFFFFFFF);
    func_0BACE0(&D_00335518, 0x40602020, 0xFFB07050);
    for (i = 0; i < 7; i++) {
        func_0BADC0(&D_00335518, 1, 1);
        if (D_0021D190[i].w_00 != 6) {
            func_0BB588((int)&D_00335518, D_0021D190[i].w_08, i, 0, 0, 0, 0, 0, 0xFFFFFFFF);
        }
    }
    D_00335518.flags_14 |= 0x14;
    func_0BAF58(&D_00335518);
}
