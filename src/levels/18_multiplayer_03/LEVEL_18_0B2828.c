/* LEVEL_18:0x0B2828 -- placement copy of LEVEL_01_0C4398.c: initialises the scene object and registers the tabled entries from the highest id downwards. */

struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

extern struct Obj D_00277580;
extern int D_001AF894;

extern void func_0A7B40(struct Obj *o, int a, int b, int c);
extern void func_09BE08(int a, void *buf, float f);
extern void func_0A7EB8(struct Obj *o, int a, int b, int c, int d);
extern void func_0A7EA0(struct Obj *o, int a, unsigned int b);
extern int func_0A79C0(char *object, int first, int second);
extern int func_0A7AA0(struct Obj *o, int a, int b);
extern int func_0A0F30(int k);
extern int func_10DFE0(int id);
extern int func_0A8268(struct Obj *o, int id, int k, int a, int b, int c, int d, int e, unsigned int f);
extern int func_0A7C38(struct Obj *o);

void func_0B2828(void)
{
    int buf[4];
    int i;
    int k;

    func_0A7B40(&D_00277580, D_001AF894, 0x20800, 0);
    func_09BE08(0x1FB, buf, 0.0f);
    func_0A7EB8(&D_00277580, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0A7EA0(&D_00277580, 0x1FA, 0xFFFFFFFF);
    func_0A79C0(&D_00277580, 0x40602020, 0xFFB07050);
    for (i = 0x93; i >= 3; i--) {
        k = -i;
        if (func_0A0F30(k) != 0) {
            if (k != -0x88) {
                func_0A7AA0(&D_00277580, 1, 1);
                func_0A8268(&D_00277580, func_10DFE0(i + 0x7CF), k, 0, 0, 0, 1, 0, 0xFFFFFFFF);
            }
        }
    }
    D_00277580.flags_14 |= 0x14;
    func_0A7C38(&D_00277580);
}
