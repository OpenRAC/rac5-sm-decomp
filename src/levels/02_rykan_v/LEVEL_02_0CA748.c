/* LEVEL_02:0x0CA748 -- placement copy of LEVEL_01_0C3E38.c: sets up one global object with fixed parameters, then registers thirteen numbered entries on it and marks it ready. */

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

extern Obj D_003406B0;
extern int D_0021534C;
extern Game *D_00208C2C;

extern void func_0C0428(Obj *o, int a, unsigned int b, int c);
extern void func_0B5018(int id, Pair *out, float f);
extern void func_0C07A0(Obj *o, int a, int b, int c, int d);
extern void func_0C0788(Obj *o, int a, unsigned int b);
extern int func_0C02A8(char *object, int first, int second);
extern int func_0C0388(Obj *o, int a, int b);
extern int func_138860(int i);
extern int func_0C0B50(Obj *o, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0C0520(Obj *o);

void func_0CA748(void)
{
    Pair buf[4];
    unsigned int i;
    int v;
    int j;

    func_0C0428(&D_003406B0, D_0021534C, 0x20800, 0);
    func_0B5018(0x1FB, buf, 0.0f);
    func_0C07A0(&D_003406B0, buf[0].v, buf[1].v, buf[2].v, buf[3].v);
    func_0C0788(&D_003406B0, 0x1FA, 0xFFFFFFFF);
    func_0C02A8(&D_003406B0, 0x40602020, 0xFFB07050);
    for (i = 0xBB9; i < 0xBC6; i++) {
        j = i - 0xBB8;
        func_0C0388(&D_003406B0, 1, 1);
        v = i + 15;
        if (v == 0xBCA) {
            if (D_00208C2C->mode_24 == 2) {
                v = 0xBD6;
            }
        }
        func_0C0B50(&D_003406B0, func_138860(i), v, j, 0, 0, 1, 0, 0xFFFFFFFF);
    }
    D_003406B0.flags_14 |= 0x14;
    func_0C0520(&D_003406B0);
}
