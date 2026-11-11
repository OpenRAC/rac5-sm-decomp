/* LEVEL_05:0x0C2940 -- placement copy of LEVEL_01_0C4398.c: initialises the scene object and registers the tabled entries from the highest id downwards. */

struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

extern struct Obj D_00315180;
extern int D_001EF71C;

extern void func_0B80C0(struct Obj *o, int a, int b, int c);
extern void func_0ACCC8(int a, void *buf, float f);
extern void func_0B8438(struct Obj *o, int a, int b, int c, int d);
extern void func_0B8420(struct Obj *o, int a, unsigned int b);
extern int func_0B7F40(char *object, int first, int second);
extern int func_0B8020(struct Obj *o, int a, int b);
extern int func_0B1B20(int k);
extern int func_12DE28(int id);
extern int func_0B87E8(struct Obj *o, int id, int k, int a, int b, int c, int d, int e, unsigned int f);
extern int func_0B81B8(struct Obj *o);

void func_0C2940(void)
{
    int buf[4];
    int i;
    int k;

    func_0B80C0(&D_00315180, D_001EF71C, 0x20800, 0);
    func_0ACCC8(0x1FB, buf, 0.0f);
    func_0B8438(&D_00315180, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0B8420(&D_00315180, 0x1FA, 0xFFFFFFFF);
    func_0B7F40(&D_00315180, 0x40602020, 0xFFB07050);
    for (i = 0x93; i >= 3; i--) {
        k = -i;
        if (func_0B1B20(k) != 0) {
            if (k != -0x88) {
                func_0B8020(&D_00315180, 1, 1);
                func_0B87E8(&D_00315180, func_12DE28(i + 0x7CF), k, 0, 0, 0, 1, 0, 0xFFFFFFFF);
            }
        }
    }
    D_00315180.flags_14 |= 0x14;
    func_0B81B8(&D_00315180);
}
