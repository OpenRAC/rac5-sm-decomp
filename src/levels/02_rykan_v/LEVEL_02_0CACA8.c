/* LEVEL_02:0x0CACA8 -- placement copy of LEVEL_01_0C4398.c: initialises the scene object and registers the tabled entries from the highest id downwards. */

struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

extern struct Obj D_003407C0;
extern int D_0021535C;

extern void func_0C0428(struct Obj *o, int a, int b, int c);
extern void func_0B5018(int a, void *buf, float f);
extern void func_0C07A0(struct Obj *o, int a, int b, int c, int d);
extern void func_0C0788(struct Obj *o, int a, unsigned int b);
extern int func_0C02A8(char *object, int first, int second);
extern int func_0C0388(struct Obj *o, int a, int b);
extern int func_0B9E70(int k);
extern int func_138860(int id);
extern int func_0C0B50(struct Obj *o, int id, int k, int a, int b, int c, int d, int e, unsigned int f);
extern int func_0C0520(struct Obj *o);

void func_0CACA8(void)
{
    int buf[4];
    int i;
    int k;

    func_0C0428(&D_003407C0, D_0021535C, 0x20800, 0);
    func_0B5018(0x1FB, buf, 0.0f);
    func_0C07A0(&D_003407C0, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0C0788(&D_003407C0, 0x1FA, 0xFFFFFFFF);
    func_0C02A8(&D_003407C0, 0x40602020, 0xFFB07050);
    for (i = 0x93; i >= 3; i--) {
        k = -i;
        if (func_0B9E70(k) != 0) {
            if (k != -0x88) {
                func_0C0388(&D_003407C0, 1, 1);
                func_0C0B50(&D_003407C0, func_138860(i + 0x7CF), k, 0, 0, 0, 1, 0, 0xFFFFFFFF);
            }
        }
    }
    D_003407C0.flags_14 |= 0x14;
    func_0C0520(&D_003407C0);
}
