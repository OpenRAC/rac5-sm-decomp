/* LEVEL_24:0x0BDC60 -- placement copy of LEVEL_01_0C4398.c: initialises the scene object and registers the tabled entries from the highest id downwards. */

struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

extern struct Obj D_002F5180;
extern int D_001D101C;

extern void func_0B33A8(struct Obj *o, int a, int b, int c);
extern void func_0A7F80(int a, void *buf, float f);
extern void func_0B3720(struct Obj *o, int a, int b, int c, int d);
extern void func_0B3708(struct Obj *o, int a, unsigned int b);
extern int func_0B3228(char *object, int first, int second);
extern int func_0B3308(struct Obj *o, int a, int b);
extern int func_0ACDD8(int k);
extern int func_127FB0(int id);
extern int func_0B3AD0(struct Obj *o, int id, int k, int a, int b, int c, int d, int e, unsigned int f);
extern int func_0B34A0(struct Obj *o);

void func_0BDC60(void)
{
    int buf[4];
    int i;
    int k;

    func_0B33A8(&D_002F5180, D_001D101C, 0x20800, 0);
    func_0A7F80(0x1FB, buf, 0.0f);
    func_0B3720(&D_002F5180, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0B3708(&D_002F5180, 0x1FA, 0xFFFFFFFF);
    func_0B3228(&D_002F5180, 0x40602020, 0xFFB07050);
    for (i = 0x93; i >= 3; i--) {
        k = -i;
        if (func_0ACDD8(k) != 0) {
            if (k != -0x88) {
                func_0B3308(&D_002F5180, 1, 1);
                func_0B3AD0(&D_002F5180, func_127FB0(i + 0x7CF), k, 0, 0, 0, 1, 0, 0xFFFFFFFF);
            }
        }
    }
    D_002F5180.flags_14 |= 0x14;
    func_0B34A0(&D_002F5180);
}
