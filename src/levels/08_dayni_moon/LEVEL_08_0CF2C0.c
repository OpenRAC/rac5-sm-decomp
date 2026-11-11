/* LEVEL_08:0x0CF2C0 -- placement copy of LEVEL_01_0C4398.c: initialises the scene object and registers the tabled entries from the highest id downwards. */

struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

extern struct Obj D_00378540;
extern int D_0024925C;

extern void func_0C4A08(struct Obj *o, int a, int b, int c);
extern void func_0B9040(int a, void *buf, float f);
extern void func_0C4D80(struct Obj *o, int a, int b, int c, int d);
extern void func_0C4D68(struct Obj *o, int a, unsigned int b);
extern int func_0C4888(char *object, int first, int second);
extern int func_0C4968(struct Obj *o, int a, int b);
extern int func_0BE338(int k);
extern int func_1439E8(int id);
extern int func_0C5130(struct Obj *o, int id, int k, int a, int b, int c, int d, int e, unsigned int f);
extern int func_0C4B00(struct Obj *o);

void func_0CF2C0(void)
{
    int buf[4];
    int i;
    int k;

    func_0C4A08(&D_00378540, D_0024925C, 0x20800, 0);
    func_0B9040(0x1FB, buf, 0.0f);
    func_0C4D80(&D_00378540, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0C4D68(&D_00378540, 0x1FA, 0xFFFFFFFF);
    func_0C4888(&D_00378540, 0x40602020, 0xFFB07050);
    for (i = 0x93; i >= 3; i--) {
        k = -i;
        if (func_0BE338(k) != 0) {
            if (k != -0x88) {
                func_0C4968(&D_00378540, 1, 1);
                func_0C5130(&D_00378540, func_1439E8(i + 0x7CF), k, 0, 0, 0, 1, 0, 0xFFFFFFFF);
            }
        }
    }
    D_00378540.flags_14 |= 0x14;
    func_0C4B00(&D_00378540);
}
