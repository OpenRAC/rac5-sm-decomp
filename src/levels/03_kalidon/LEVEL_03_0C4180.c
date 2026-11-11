/* LEVEL_03:0x0C4180 -- placement copy of LEVEL_01_0C4398.c: initialises the scene object and registers the tabled entries from the highest id downwards. */

struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

extern struct Obj D_00344140;
extern int D_00218A1C;

extern void func_0B9900(struct Obj *o, int a, int b, int c);
extern void func_0AE488(int a, void *buf, float f);
extern void func_0B9C78(struct Obj *o, int a, int b, int c, int d);
extern void func_0B9C60(struct Obj *o, int a, unsigned int b);
extern int func_0B9780(char *object, int first, int second);
extern int func_0B9860(struct Obj *o, int a, int b);
extern int func_0B3348(int k);
extern int func_130878(int id);
extern int func_0BA028(struct Obj *o, int id, int k, int a, int b, int c, int d, int e, unsigned int f);
extern int func_0B99F8(struct Obj *o);

void func_0C4180(void)
{
    int buf[4];
    int i;
    int k;

    func_0B9900(&D_00344140, D_00218A1C, 0x20800, 0);
    func_0AE488(0x1FB, buf, 0.0f);
    func_0B9C78(&D_00344140, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0B9C60(&D_00344140, 0x1FA, 0xFFFFFFFF);
    func_0B9780(&D_00344140, 0x40602020, 0xFFB07050);
    for (i = 0x93; i >= 3; i--) {
        k = -i;
        if (func_0B3348(k) != 0) {
            if (k != -0x88) {
                func_0B9860(&D_00344140, 1, 1);
                func_0BA028(&D_00344140, func_130878(i + 0x7CF), k, 0, 0, 0, 1, 0, 0xFFFFFFFF);
            }
        }
    }
    D_00344140.flags_14 |= 0x14;
    func_0B99F8(&D_00344140);
}
