/* LEVEL_07:0x0C63F8 -- placement copy of LEVEL_01_0C4398.c: initialises the scene object and registers the tabled entries from the highest id downwards. */

struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

extern struct Obj D_0033EBC0;
extern int D_0021469C;

extern void func_0BBB78(struct Obj *o, int a, int b, int c);
extern void func_0B0708(int a, void *buf, float f);
extern void func_0BBEF0(struct Obj *o, int a, int b, int c, int d);
extern void func_0BBED8(struct Obj *o, int a, unsigned int b);
extern int func_0BB9F8(char *object, int first, int second);
extern int func_0BBAD8(struct Obj *o, int a, int b);
extern int func_0B55C0(int k);
extern int func_1354B0(int id);
extern int func_0BC2A0(struct Obj *o, int id, int k, int a, int b, int c, int d, int e, unsigned int f);
extern int func_0BBC70(struct Obj *o);

void func_0C63F8(void)
{
    int buf[4];
    int i;
    int k;

    func_0BBB78(&D_0033EBC0, D_0021469C, 0x20800, 0);
    func_0B0708(0x1FB, buf, 0.0f);
    func_0BBEF0(&D_0033EBC0, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0BBED8(&D_0033EBC0, 0x1FA, 0xFFFFFFFF);
    func_0BB9F8(&D_0033EBC0, 0x40602020, 0xFFB07050);
    for (i = 0x93; i >= 3; i--) {
        k = -i;
        if (func_0B55C0(k) != 0) {
            if (k != -0x88) {
                func_0BBAD8(&D_0033EBC0, 1, 1);
                func_0BC2A0(&D_0033EBC0, func_1354B0(i + 0x7CF), k, 0, 0, 0, 1, 0, 0xFFFFFFFF);
            }
        }
    }
    D_0033EBC0.flags_14 |= 0x14;
    func_0BBC70(&D_0033EBC0);
}
