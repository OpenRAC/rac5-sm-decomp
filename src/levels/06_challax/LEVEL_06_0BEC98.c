/* LEVEL_06:0x0BEC98 -- placement copy of LEVEL_01_0C4398.c: initialises the scene object and registers the tabled entries from the highest id downwards. */

struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

extern struct Obj D_00316040;
extern int D_001EF29C;

extern void func_0B4418(struct Obj *o, int a, int b, int c);
extern void func_0A8ED8(int a, void *buf, float f);
extern void func_0B4790(struct Obj *o, int a, int b, int c, int d);
extern void func_0B4778(struct Obj *o, int a, unsigned int b);
extern int func_0B4298(char *object, int first, int second);
extern int func_0B4378(struct Obj *o, int a, int b);
extern int func_0ADDA0(int k);
extern int func_128B80(int id);
extern int func_0B4B40(struct Obj *o, int id, int k, int a, int b, int c, int d, int e, unsigned int f);
extern int func_0B4510(struct Obj *o);

void func_0BEC98(void)
{
    int buf[4];
    int i;
    int k;

    func_0B4418(&D_00316040, D_001EF29C, 0x20800, 0);
    func_0A8ED8(0x1FB, buf, 0.0f);
    func_0B4790(&D_00316040, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0B4778(&D_00316040, 0x1FA, 0xFFFFFFFF);
    func_0B4298(&D_00316040, 0x40602020, 0xFFB07050);
    for (i = 0x93; i >= 3; i--) {
        k = -i;
        if (func_0ADDA0(k) != 0) {
            if (k != -0x88) {
                func_0B4378(&D_00316040, 1, 1);
                func_0B4B40(&D_00316040, func_128B80(i + 0x7CF), k, 0, 0, 0, 1, 0, 0xFFFFFFFF);
            }
        }
    }
    D_00316040.flags_14 |= 0x14;
    func_0B4510(&D_00316040);
}
