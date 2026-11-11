/* LEVEL_21:0x0A4480 -- placement copy of LEVEL_01_0C3E38.c: sets up one global object with fixed parameters, then registers thirteen numbered entries on it and marks it ready. */

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

extern Obj D_002409F0;
extern int D_0015500C;
extern Game *D_00148C2C;

extern void func_09A160(Obj *o, int a, unsigned int b, int c);
extern void func_08EFD0(int id, Pair *out, float f);
extern void func_09A4D8(Obj *o, int a, int b, int c, int d);
extern void func_09A4C0(Obj *o, int a, unsigned int b);
extern int func_099FE0(char *object, int first, int second);
extern int func_09A0C0(Obj *o, int a, int b);
extern int func_0F1378(int i);
extern int func_09A888(Obj *o, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_09A258(Obj *o);

void func_0A4480(void)
{
    Pair buf[4];
    unsigned int i;
    int v;
    int j;

    func_09A160(&D_002409F0, D_0015500C, 0x20800, 0);
    func_08EFD0(0x1FB, buf, 0.0f);
    func_09A4D8(&D_002409F0, buf[0].v, buf[1].v, buf[2].v, buf[3].v);
    func_09A4C0(&D_002409F0, 0x1FA, 0xFFFFFFFF);
    func_099FE0(&D_002409F0, 0x40602020, 0xFFB07050);
    for (i = 0xBB9; i < 0xBC6; i++) {
        j = i - 0xBB8;
        func_09A0C0(&D_002409F0, 1, 1);
        v = i + 15;
        if (v == 0xBCA) {
            if (D_00148C2C->mode_24 == 2) {
                v = 0xBD6;
            }
        }
        func_09A888(&D_002409F0, func_0F1378(i), v, j, 0, 0, 1, 0, 0xFFFFFFFF);
    }
    D_002409F0.flags_14 |= 0x14;
    func_09A258(&D_002409F0);
}
