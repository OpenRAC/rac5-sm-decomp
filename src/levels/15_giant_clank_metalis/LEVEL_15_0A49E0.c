/* LEVEL_15:0x0A49E0 -- placement copy of LEVEL_01_0C4398.c: initialises the scene object and registers the tabled entries from the highest id downwards. */

struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

extern struct Obj D_00240B00;
extern int D_0015501C;

extern void func_09A160(struct Obj *o, int a, int b, int c);
extern void func_08EFD0(int a, void *buf, float f);
extern void func_09A4D8(struct Obj *o, int a, int b, int c, int d);
extern void func_09A4C0(struct Obj *o, int a, unsigned int b);
extern int func_099FE0(char *object, int first, int second);
extern int func_09A0C0(struct Obj *o, int a, int b);
extern int func_093E40(int k);
extern int func_0F1378(int id);
extern int func_09A888(struct Obj *o, int id, int k, int a, int b, int c, int d, int e, unsigned int f);
extern int func_09A258(struct Obj *o);

void func_0A49E0(void)
{
    int buf[4];
    int i;
    int k;

    func_09A160(&D_00240B00, D_0015501C, 0x20800, 0);
    func_08EFD0(0x1FB, buf, 0.0f);
    func_09A4D8(&D_00240B00, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_09A4C0(&D_00240B00, 0x1FA, 0xFFFFFFFF);
    func_099FE0(&D_00240B00, 0x40602020, 0xFFB07050);
    for (i = 0x93; i >= 3; i--) {
        k = -i;
        if (func_093E40(k) != 0) {
            if (k != -0x88) {
                func_09A0C0(&D_00240B00, 1, 1);
                func_09A888(&D_00240B00, func_0F1378(i + 0x7CF), k, 0, 0, 0, 1, 0, 0xFFFFFFFF);
            }
        }
    }
    D_00240B00.flags_14 |= 0x14;
    func_09A258(&D_00240B00);
}
