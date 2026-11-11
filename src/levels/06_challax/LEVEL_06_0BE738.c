/* LEVEL_06:0x0BE738 -- placement copy of LEVEL_01_0C3E38.c: sets up one global object with fixed parameters, then registers thirteen numbered entries on it and marks it ready. */

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

extern Obj D_00315F30;
extern int D_001EF28C;
extern Game *D_001E2EAC;

extern void func_0B4418(Obj *o, int a, unsigned int b, int c);
extern void func_0A8ED8(int id, Pair *out, float f);
extern void func_0B4790(Obj *o, int a, int b, int c, int d);
extern void func_0B4778(Obj *o, int a, unsigned int b);
extern int func_0B4298(char *object, int first, int second);
extern int func_0B4378(Obj *o, int a, int b);
extern int func_128B80(int i);
extern int func_0B4B40(Obj *o, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0B4510(Obj *o);

void func_0BE738(void)
{
    Pair buf[4];
    unsigned int i;
    int v;
    int j;

    func_0B4418(&D_00315F30, D_001EF28C, 0x20800, 0);
    func_0A8ED8(0x1FB, buf, 0.0f);
    func_0B4790(&D_00315F30, buf[0].v, buf[1].v, buf[2].v, buf[3].v);
    func_0B4778(&D_00315F30, 0x1FA, 0xFFFFFFFF);
    func_0B4298(&D_00315F30, 0x40602020, 0xFFB07050);
    for (i = 0xBB9; i < 0xBC6; i++) {
        j = i - 0xBB8;
        func_0B4378(&D_00315F30, 1, 1);
        v = i + 15;
        if (v == 0xBCA) {
            if (D_001E2EAC->mode_24 == 2) {
                v = 0xBD6;
            }
        }
        func_0B4B40(&D_00315F30, func_128B80(i), v, j, 0, 0, 1, 0, 0xFFFFFFFF);
    }
    D_00315F30.flags_14 |= 0x14;
    func_0B4510(&D_00315F30);
}
