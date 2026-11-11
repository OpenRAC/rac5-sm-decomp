/* LEVEL_10:0x0C56E8 -- placement copy of LEVEL_01_0C4398.c: initialises the scene object and registers the tabled entries from the highest id downwards. */

struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

extern struct Obj D_003326C0;
extern int D_0020939C;

extern void func_0BAE60(struct Obj *o, int a, int b, int c);
extern void func_0AF820(int a, void *buf, float f);
extern void func_0BB1D8(struct Obj *o, int a, int b, int c, int d);
extern void func_0BB1C0(struct Obj *o, int a, unsigned int b);
extern int func_0BACE0(char *object, int first, int second);
extern int func_0BADC0(struct Obj *o, int a, int b);
extern int func_0B4738(int k);
extern int func_130310(int id);
extern int func_0BB588(struct Obj *o, int id, int k, int a, int b, int c, int d, int e, unsigned int f);
extern int func_0BAF58(struct Obj *o);

void func_0C56E8(void)
{
    int buf[4];
    int i;
    int k;

    func_0BAE60(&D_003326C0, D_0020939C, 0x20800, 0);
    func_0AF820(0x1FB, buf, 0.0f);
    func_0BB1D8(&D_003326C0, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0BB1C0(&D_003326C0, 0x1FA, 0xFFFFFFFF);
    func_0BACE0(&D_003326C0, 0x40602020, 0xFFB07050);
    for (i = 0x93; i >= 3; i--) {
        k = -i;
        if (func_0B4738(k) != 0) {
            if (k != -0x88) {
                func_0BADC0(&D_003326C0, 1, 1);
                func_0BB588(&D_003326C0, func_130310(i + 0x7CF), k, 0, 0, 0, 1, 0, 0xFFFFFFFF);
            }
        }
    }
    D_003326C0.flags_14 |= 0x14;
    func_0BAF58(&D_003326C0);
}
