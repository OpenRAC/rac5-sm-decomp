/* LEVEL_24:0x0BD700 -- placement copy of LEVEL_01_0C3E38.c: sets up one global object with fixed parameters, then registers thirteen numbered entries on it and marks it ready. */

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

extern Obj D_002F5070;
extern int D_001D100C;
extern Game *D_001C4C2C;

extern void func_0B33A8(Obj *o, int a, unsigned int b, int c);
extern void func_0A7F80(int id, Pair *out, float f);
extern void func_0B3720(Obj *o, int a, int b, int c, int d);
extern void func_0B3708(Obj *o, int a, unsigned int b);
extern int func_0B3228(char *object, int first, int second);
extern int func_0B3308(Obj *o, int a, int b);
extern int func_127FB0(int i);
extern int func_0B3AD0(Obj *o, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0B34A0(Obj *o);

void func_0BD700(void)
{
    Pair buf[4];
    unsigned int i;
    int v;
    int j;

    func_0B33A8(&D_002F5070, D_001D100C, 0x20800, 0);
    func_0A7F80(0x1FB, buf, 0.0f);
    func_0B3720(&D_002F5070, buf[0].v, buf[1].v, buf[2].v, buf[3].v);
    func_0B3708(&D_002F5070, 0x1FA, 0xFFFFFFFF);
    func_0B3228(&D_002F5070, 0x40602020, 0xFFB07050);
    for (i = 0xBB9; i < 0xBC6; i++) {
        j = i - 0xBB8;
        func_0B3308(&D_002F5070, 1, 1);
        v = i + 15;
        if (v == 0xBCA) {
            if (D_001C4C2C->mode_24 == 2) {
                v = 0xBD6;
            }
        }
        func_0B3AD0(&D_002F5070, func_127FB0(i), v, j, 0, 0, 1, 0, 0xFFFFFFFF);
    }
    D_002F5070.flags_14 |= 0x14;
    func_0B34A0(&D_002F5070);
}
