/* LEVEL_23:0x0BB138 -- placement copy of LEVEL_01_0C4398.c: initialises the scene object and registers the tabled entries from the highest id downwards. */

struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

extern struct Obj D_002FA700;
extern int D_001D379C;

extern void func_0B08B0(struct Obj *o, int a, int b, int c);
extern void func_0A5478(int a, void *buf, float f);
extern void func_0B0C28(struct Obj *o, int a, int b, int c, int d);
extern void func_0B0C10(struct Obj *o, int a, unsigned int b);
extern int func_0B0730(char *object, int first, int second);
extern int func_0B0810(struct Obj *o, int a, int b);
extern int func_0AA340(int k);
extern int func_123C28(int id);
extern int func_0B0FD8(struct Obj *o, int id, int k, int a, int b, int c, int d, int e, unsigned int f);
extern int func_0B09A8(struct Obj *o);

void func_0BB138(void)
{
    int buf[4];
    int i;
    int k;

    func_0B08B0(&D_002FA700, D_001D379C, 0x20800, 0);
    func_0A5478(0x1FB, buf, 0.0f);
    func_0B0C28(&D_002FA700, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0B0C10(&D_002FA700, 0x1FA, 0xFFFFFFFF);
    func_0B0730(&D_002FA700, 0x40602020, 0xFFB07050);
    for (i = 0x93; i >= 3; i--) {
        k = -i;
        if (func_0AA340(k) != 0) {
            if (k != -0x88) {
                func_0B0810(&D_002FA700, 1, 1);
                func_0B0FD8(&D_002FA700, func_123C28(i + 0x7CF), k, 0, 0, 0, 1, 0, 0xFFFFFFFF);
            }
        }
    }
    D_002FA700.flags_14 |= 0x14;
    func_0B09A8(&D_002FA700);
}
