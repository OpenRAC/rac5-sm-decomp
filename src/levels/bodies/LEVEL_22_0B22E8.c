/* LEVEL_22:0x0B22E8 -- placement copy of LEVEL_01_0C3E38.c: sets up one global object with fixed parameters, then registers thirteen numbered entries on it and marks it ready. */

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

extern Obj D_0027ED70;
extern int D_0015F70C;
extern Game *D_0015332C;

extern void func_0A7FC0(Obj *o, int a, unsigned int b, int c);
extern void func_09CD18(int id, Pair *out, float f);
extern void func_0A8338(Obj *o, int a, int b, int c, int d);
extern void func_0A8320(Obj *o, int a, unsigned int b);
extern int func_0A7E40(char *object, int first, int second);
extern int func_0A7F20(Obj *o, int a, int b);
extern int func_109980(int i);
extern int func_0A86E8(Obj *o, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0A80B8(Obj *o);

void func_0B22E8(void)
{
    Pair buf[4];
    unsigned int i;
    int v;
    int j;

    func_0A7FC0(&D_0027ED70, D_0015F70C, 0x20800, 0);
    func_09CD18(0x1FB, buf, 0.0f);
    func_0A8338(&D_0027ED70, buf[0].v, buf[1].v, buf[2].v, buf[3].v);
    func_0A8320(&D_0027ED70, 0x1FA, 0xFFFFFFFF);
    func_0A7E40(&D_0027ED70, 0x40602020, 0xFFB07050);
    for (i = 0xBB9; i < 0xBC6; i++) {
        j = i - 0xBB8;
        func_0A7F20(&D_0027ED70, 1, 1);
        v = i + 15;
        if (v == 0xBCA) {
            if (D_0015332C->mode_24 == 2) {
                v = 0xBD6;
            }
        }
        func_0A86E8(&D_0027ED70, func_109980(i), v, j, 0, 0, 1, 0, 0xFFFFFFFF);
    }
    D_0027ED70.flags_14 |= 0x14;
    func_0A80B8(&D_0027ED70);
}
