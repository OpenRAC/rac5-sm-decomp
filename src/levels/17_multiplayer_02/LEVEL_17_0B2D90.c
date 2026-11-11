/* LEVEL_17:0x0B2D90 -- placement copy of LEVEL_01_0C4398.c: initialises the scene object and registers the tabled entries from the highest id downwards. */

struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

extern struct Obj D_00268500;
extern int D_001A1A14;

extern void func_0A80A8(struct Obj *o, int a, int b, int c);
extern void func_09C2F0(int a, void *buf, float f);
extern void func_0A8420(struct Obj *o, int a, int b, int c, int d);
extern void func_0A8408(struct Obj *o, int a, unsigned int b);
extern int func_0A7F28(char *object, int first, int second);
extern int func_0A8008(struct Obj *o, int a, int b);
extern int func_0A1418(int k);
extern int func_10E8A8(int id);
extern int func_0A87D0(struct Obj *o, int id, int k, int a, int b, int c, int d, int e, unsigned int f);
extern int func_0A81A0(struct Obj *o);

void func_0B2D90(void)
{
    int buf[4];
    int i;
    int k;

    func_0A80A8(&D_00268500, D_001A1A14, 0x20800, 0);
    func_09C2F0(0x1FB, buf, 0.0f);
    func_0A8420(&D_00268500, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0A8408(&D_00268500, 0x1FA, 0xFFFFFFFF);
    func_0A7F28(&D_00268500, 0x40602020, 0xFFB07050);
    for (i = 0x93; i >= 3; i--) {
        k = -i;
        if (func_0A1418(k) != 0) {
            if (k != -0x88) {
                func_0A8008(&D_00268500, 1, 1);
                func_0A87D0(&D_00268500, func_10E8A8(i + 0x7CF), k, 0, 0, 0, 1, 0, 0xFFFFFFFF);
            }
        }
    }
    D_00268500.flags_14 |= 0x14;
    func_0A81A0(&D_00268500);
}
