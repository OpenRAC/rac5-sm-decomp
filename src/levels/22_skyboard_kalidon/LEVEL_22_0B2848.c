/* LEVEL_22:0x0B2848 -- placement copy of LEVEL_01_0C4398.c: initialises the scene object and registers the tabled entries from the highest id downwards. */

struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

extern struct Obj D_0027EE80;
extern int D_0015F71C;

extern void func_0A7FC0(struct Obj *o, int a, int b, int c);
extern void func_09CD18(int a, void *buf, float f);
extern void func_0A8338(struct Obj *o, int a, int b, int c, int d);
extern void func_0A8320(struct Obj *o, int a, unsigned int b);
extern int func_0A7E40(char *object, int first, int second);
extern int func_0A7F20(struct Obj *o, int a, int b);
extern int func_0A1BE0(int k);
extern int func_109980(int id);
extern int func_0A86E8(struct Obj *o, int id, int k, int a, int b, int c, int d, int e, unsigned int f);
extern int func_0A80B8(struct Obj *o);

void func_0B2848(void)
{
    int buf[4];
    int i;
    int k;

    func_0A7FC0(&D_0027EE80, D_0015F71C, 0x20800, 0);
    func_09CD18(0x1FB, buf, 0.0f);
    func_0A8338(&D_0027EE80, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0A8320(&D_0027EE80, 0x1FA, 0xFFFFFFFF);
    func_0A7E40(&D_0027EE80, 0x40602020, 0xFFB07050);
    for (i = 0x93; i >= 3; i--) {
        k = -i;
        if (func_0A1BE0(k) != 0) {
            if (k != -0x88) {
                func_0A7F20(&D_0027EE80, 1, 1);
                func_0A86E8(&D_0027EE80, func_109980(i + 0x7CF), k, 0, 0, 0, 1, 0, 0xFFFFFFFF);
            }
        }
    }
    D_0027EE80.flags_14 |= 0x14;
    func_0A80B8(&D_0027EE80);
}
