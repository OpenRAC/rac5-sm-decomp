/* LEVEL_16:0x0B3850 -- placement copy of LEVEL_01_0C4398.c: initialises the scene object and registers the tabled entries from the highest id downwards. */

struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

extern struct Obj D_00277200;
extern int D_001AE414;

extern void func_0A8B68(struct Obj *o, int a, int b, int c);
extern void func_09CDF8(int a, void *buf, float f);
extern void func_0A8EE0(struct Obj *o, int a, int b, int c, int d);
extern void func_0A8EC8(struct Obj *o, int a, unsigned int b);
extern int func_0A89E8(char *object, int first, int second);
extern int func_0A8AC8(struct Obj *o, int a, int b);
extern int func_0A1F38(int k);
extern int func_10F330(int id);
extern int func_0A9290(struct Obj *o, int id, int k, int a, int b, int c, int d, int e, unsigned int f);
extern int func_0A8C60(struct Obj *o);

void func_0B3850(void)
{
    int buf[4];
    int i;
    int k;

    func_0A8B68(&D_00277200, D_001AE414, 0x20800, 0);
    func_09CDF8(0x1FB, buf, 0.0f);
    func_0A8EE0(&D_00277200, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0A8EC8(&D_00277200, 0x1FA, 0xFFFFFFFF);
    func_0A89E8(&D_00277200, 0x40602020, 0xFFB07050);
    for (i = 0x93; i >= 3; i--) {
        k = -i;
        if (func_0A1F38(k) != 0) {
            if (k != -0x88) {
                func_0A8AC8(&D_00277200, 1, 1);
                func_0A9290(&D_00277200, func_10F330(i + 0x7CF), k, 0, 0, 0, 1, 0, 0xFFFFFFFF);
            }
        }
    }
    D_00277200.flags_14 |= 0x14;
    func_0A8C60(&D_00277200);
}
