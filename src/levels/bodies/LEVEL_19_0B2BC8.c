/* LEVEL_19:0x0B2BC8 -- placement copy of LEVEL_01_0C3E38.c: sets up one global object with fixed parameters, then registers thirteen numbered entries on it and marks it ready. */

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

extern Obj D_00277270;
extern int D_001AF584;
extern Game *D_001A2C34;

extern void func_0A8440(Obj *o, int a, unsigned int b, int c);
extern void func_09C688(int id, Pair *out, float f);
extern void func_0A87B8(Obj *o, int a, int b, int c, int d);
extern void func_0A87A0(Obj *o, int a, unsigned int b);
extern int func_0A82C0(char *object, int first, int second);
extern int func_0A83A0(Obj *o, int a, int b);
extern int func_10F9D0(int i);
extern int func_0A8B68(Obj *o, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0A8538(Obj *o);

void func_0B2BC8(void)
{
    Pair buf[4];
    unsigned int i;
    int v;
    int j;

    func_0A8440(&D_00277270, D_001AF584, 0x20800, 0);
    func_09C688(0x1FB, buf, 0.0f);
    func_0A87B8(&D_00277270, buf[0].v, buf[1].v, buf[2].v, buf[3].v);
    func_0A87A0(&D_00277270, 0x1FA, 0xFFFFFFFF);
    func_0A82C0(&D_00277270, 0x40602020, 0xFFB07050);
    for (i = 0xBB9; i < 0xBC6; i++) {
        j = i - 0xBB8;
        func_0A83A0(&D_00277270, 1, 1);
        v = i + 15;
        if (v == 0xBCA) {
            if (D_001A2C34->mode_24 == 2) {
                v = 0xBD6;
            }
        }
        func_0A8B68(&D_00277270, func_10F9D0(i), v, j, 0, 0, 1, 0, 0xFFFFFFFF);
    }
    D_00277270.flags_14 |= 0x14;
    func_0A8538(&D_00277270);
}
