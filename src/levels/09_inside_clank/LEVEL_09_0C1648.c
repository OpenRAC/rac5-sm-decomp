/* LEVEL_09:0x0C1648 -- placement copy of LEVEL_01_0C4398.c: initialises the scene object and registers the tabled entries from the highest id downwards. */

struct Obj {
    char pad_00[0x14];
    unsigned int flags_14;
};

extern struct Obj D_00310A40;
extern int D_001EA19C;

extern void func_0B6DC8(struct Obj *o, int a, int b, int c);
extern void func_0AB9B8(int a, void *buf, float f);
extern void func_0B7140(struct Obj *o, int a, int b, int c, int d);
extern void func_0B7128(struct Obj *o, int a, unsigned int b);
extern int func_0B6C48(char *object, int first, int second);
extern int func_0B6D28(struct Obj *o, int a, int b);
extern int func_0B0810(int k);
extern int func_12B448(int id);
extern int func_0B74F0(struct Obj *o, int id, int k, int a, int b, int c, int d, int e, unsigned int f);
extern int func_0B6EC0(struct Obj *o);

void func_0C1648(void)
{
    int buf[4];
    int i;
    int k;

    func_0B6DC8(&D_00310A40, D_001EA19C, 0x20800, 0);
    func_0AB9B8(0x1FB, buf, 0.0f);
    func_0B7140(&D_00310A40, (short)buf[0], (short)buf[1], (short)buf[2], (short)buf[3]);
    func_0B7128(&D_00310A40, 0x1FA, 0xFFFFFFFF);
    func_0B6C48(&D_00310A40, 0x40602020, 0xFFB07050);
    for (i = 0x93; i >= 3; i--) {
        k = -i;
        if (func_0B0810(k) != 0) {
            if (k != -0x88) {
                func_0B6D28(&D_00310A40, 1, 1);
                func_0B74F0(&D_00310A40, func_12B448(i + 0x7CF), k, 0, 0, 0, 1, 0, 0xFFFFFFFF);
            }
        }
    }
    D_00310A40.flags_14 |= 0x14;
    func_0B6EC0(&D_00310A40);
}
