/* LEVEL_07:0x0C5E98 -- placement copy of LEVEL_01_0C3E38.c: sets up one global object with fixed parameters, then registers thirteen numbered entries on it and marks it ready. */

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

extern Obj D_0033EAB0;
extern int D_0021468C;
extern Game *D_002082AC;

extern void func_0BBB78(Obj *o, int a, unsigned int b, int c);
extern void func_0B0708(int id, Pair *out, float f);
extern void func_0BBEF0(Obj *o, int a, int b, int c, int d);
extern void func_0BBED8(Obj *o, int a, unsigned int b);
extern int func_0BB9F8(char *object, int first, int second);
extern int func_0BBAD8(Obj *o, int a, int b);
extern int func_1354B0(int i);
extern int func_0BC2A0(Obj *o, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0BBC70(Obj *o);

void func_0C5E98(void)
{
    Pair buf[4];
    unsigned int i;
    int v;
    int j;

    func_0BBB78(&D_0033EAB0, D_0021468C, 0x20800, 0);
    func_0B0708(0x1FB, buf, 0.0f);
    func_0BBEF0(&D_0033EAB0, buf[0].v, buf[1].v, buf[2].v, buf[3].v);
    func_0BBED8(&D_0033EAB0, 0x1FA, 0xFFFFFFFF);
    func_0BB9F8(&D_0033EAB0, 0x40602020, 0xFFB07050);
    for (i = 0xBB9; i < 0xBC6; i++) {
        j = i - 0xBB8;
        func_0BBAD8(&D_0033EAB0, 1, 1);
        v = i + 15;
        if (v == 0xBCA) {
            if (D_002082AC->mode_24 == 2) {
                v = 0xBD6;
            }
        }
        func_0BC2A0(&D_0033EAB0, func_1354B0(i), v, j, 0, 0, 1, 0, 0xFFFFFFFF);
    }
    D_0033EAB0.flags_14 |= 0x14;
    func_0BBC70(&D_0033EAB0);
}
