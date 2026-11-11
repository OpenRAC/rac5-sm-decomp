/* LEVEL_03:0x0C3C20 -- placement copy of LEVEL_01_0C3E38.c: sets up one global object with fixed parameters, then registers thirteen numbered entries on it and marks it ready. */

typedef struct {
    short v;
    short pad;
} Pair;

typedef struct {
    char pad_00[0x14];
    unsigned int flags_14;
} Obj;

typedef struct {
    char pad_00[0x24];
    int mode_24;
} Game;

extern Obj D_00344030;
extern int D_00218A0C;
extern Game *D_0020C62C;

extern void func_0B9900(Obj *o, int a, unsigned int b, int c);
extern void func_0AE488(int id, Pair *out, float f);
extern void func_0B9C78(Obj *o, int a, int b, int c, int d);
extern void func_0B9C60(Obj *o, int a, unsigned int b);
extern int func_0B9780(char *object, int first, int second);
extern int func_0B9860(Obj *o, int a, int b);
extern int func_130878(int i);
extern int func_0BA028(Obj *o, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0B99F8(Obj *o);

void func_0C3C20(void)
{
    Pair buf[4];
    unsigned int i;
    int v;
    int j;

    func_0B9900(&D_00344030, D_00218A0C, 0x20800, 0);
    func_0AE488(0x1FB, buf, 0.0f);
    func_0B9C78(&D_00344030, buf[0].v, buf[1].v, buf[2].v, buf[3].v);
    func_0B9C60(&D_00344030, 0x1FA, 0xFFFFFFFF);
    func_0B9780(&D_00344030, 0x40602020, 0xFFB07050);
    for (i = 0xBB9; i < 0xBC6; i++) {
        j = i - 0xBB8;
        func_0B9860(&D_00344030, 1, 1);
        v = i + 15;
        if (v == 0xBCA) {
            if (D_0020C62C->mode_24 == 2) {
                v = 0xBD6;
            }
        }
        func_0BA028(&D_00344030, func_130878(i), v, j, 0, 0, 1, 0, 0xFFFFFFFF);
    }
    D_00344030.flags_14 |= 0x14;
    func_0B99F8(&D_00344030);
}
