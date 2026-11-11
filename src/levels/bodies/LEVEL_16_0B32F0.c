/* LEVEL_16:0x0B32F0 -- placement copy of LEVEL_01_0C3E38.c: sets up one global object with fixed parameters, then registers thirteen numbered entries on it and marks it ready. */

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

extern Obj D_002770F0;
extern int D_001AE404;
extern Game *D_001A1AB4;

extern void func_0A8B68(Obj *o, int a, unsigned int b, int c);
extern void func_09CDF8(int id, Pair *out, float f);
extern void func_0A8EE0(Obj *o, int a, int b, int c, int d);
extern void func_0A8EC8(Obj *o, int a, unsigned int b);
extern int func_0A89E8(char *object, int first, int second);
extern int func_0A8AC8(Obj *o, int a, int b);
extern int func_10F330(int i);
extern int func_0A9290(Obj *o, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0A8C60(Obj *o);

void func_0B32F0(void)
{
    Pair buf[4];
    unsigned int i;
    int v;
    int j;

    func_0A8B68(&D_002770F0, D_001AE404, 0x20800, 0);
    func_09CDF8(0x1FB, buf, 0.0f);
    func_0A8EE0(&D_002770F0, buf[0].v, buf[1].v, buf[2].v, buf[3].v);
    func_0A8EC8(&D_002770F0, 0x1FA, 0xFFFFFFFF);
    func_0A89E8(&D_002770F0, 0x40602020, 0xFFB07050);
    for (i = 0xBB9; i < 0xBC6; i++) {
        j = i - 0xBB8;
        func_0A8AC8(&D_002770F0, 1, 1);
        v = i + 15;
        if (v == 0xBCA) {
            if (D_001A1AB4->mode_24 == 2) {
                v = 0xBD6;
            }
        }
        func_0A9290(&D_002770F0, func_10F330(i), v, j, 0, 0, 1, 0, 0xFFFFFFFF);
    }
    D_002770F0.flags_14 |= 0x14;
    func_0A8C60(&D_002770F0);
}
