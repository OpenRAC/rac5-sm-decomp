/* LEVEL_19:0x0B3128 -- placement copy of LEVEL_01_0C4398.c: initialises the scene object and registers the tabled entries from the highest id downwards. */

struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

extern struct Obj D_00277380;
extern int D_001AF594;

extern void func_0A8440(struct Obj *o, int a, int b, int c);
extern void func_09C688(int a, void *buf, float f);
extern void func_0A87B8(struct Obj *o, int a, int b, int c, int d);
extern void func_0A87A0(struct Obj *o, int a, unsigned int b);
extern int func_0A82C0(char *object, int first, int second);
extern int func_0A83A0(struct Obj *o, int a, int b);
extern int func_0A17B0(int k);
extern int func_10F9D0(int id);
extern int func_0A8B68(struct Obj *o, int id, int k, int a, int b, int c, int d, int e, unsigned int f);
extern int func_0A8538(struct Obj *o);

void func_0B3128(void)
{
    int buf[4];
    int i;
    int k;

    func_0A8440(&D_00277380, D_001AF594, 0x20800, 0);
    func_09C688(0x1FB, buf, 0.0f);
    func_0A87B8(&D_00277380, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0A87A0(&D_00277380, 0x1FA, 0xFFFFFFFF);
    func_0A82C0(&D_00277380, 0x40602020, 0xFFB07050);
    for (i = 0x93; i >= 3; i--) {
        k = -i;
        if (func_0A17B0(k) != 0) {
            if (k != -0x88) {
                func_0A83A0(&D_00277380, 1, 1);
                func_0A8B68(&D_00277380, func_10F9D0(i + 0x7CF), k, 0, 0, 0, 1, 0, 0xFFFFFFFF);
            }
        }
    }
    D_00277380.flags_14 |= 0x14;
    func_0A8538(&D_00277380);
}
