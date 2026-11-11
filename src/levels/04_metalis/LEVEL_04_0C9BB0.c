/* LEVEL_04:0x0C9BB0 -- placement copy of LEVEL_01_0C4398.c: initialises the scene object and registers the tabled entries from the highest id downwards. */

struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

extern struct Obj D_00343AC0;
extern int D_0021985C;

extern void func_0BF2F8(struct Obj *o, int a, int b, int c);
extern void func_0B3958(int a, void *buf, float f);
extern void func_0BF670(struct Obj *o, int a, int b, int c, int d);
extern void func_0BF658(struct Obj *o, int a, unsigned int b);
extern int func_0BF178(char *object, int first, int second);
extern int func_0BF258(struct Obj *o, int a, int b);
extern int func_0B8C50(int k);
extern int func_13E930(int id);
extern int func_0BFA20(struct Obj *o, int id, int k, int a, int b, int c, int d, int e, unsigned int f);
extern int func_0BF3F0(struct Obj *o);

void func_0C9BB0(void)
{
    int buf[4];
    int i;
    int k;

    func_0BF2F8(&D_00343AC0, D_0021985C, 0x20800, 0);
    func_0B3958(0x1FB, buf, 0.0f);
    func_0BF670(&D_00343AC0, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0BF658(&D_00343AC0, 0x1FA, 0xFFFFFFFF);
    func_0BF178(&D_00343AC0, 0x40602020, 0xFFB07050);
    for (i = 0x93; i >= 3; i--) {
        k = -i;
        if (func_0B8C50(k) != 0) {
            if (k != -0x88) {
                func_0BF258(&D_00343AC0, 1, 1);
                func_0BFA20(&D_00343AC0, func_13E930(i + 0x7CF), k, 0, 0, 0, 1, 0, 0xFFFFFFFF);
            }
        }
    }
    D_00343AC0.flags_14 |= 0x14;
    func_0BF3F0(&D_00343AC0);
}
