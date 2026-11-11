/* LEVEL_08:0x0CED60 -- placement copy of LEVEL_01_0C3E38.c: sets up one global object with fixed parameters, then registers thirteen numbered entries on it and marks it ready. */

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

extern Obj D_00378430;
extern int D_0024924C;
extern Game *D_0023CB2C;

extern void func_0C4A08(Obj *o, int a, unsigned int b, int c);
extern void func_0B9040(int id, Pair *out, float f);
extern void func_0C4D80(Obj *o, int a, int b, int c, int d);
extern void func_0C4D68(Obj *o, int a, unsigned int b);
extern int func_0C4888(char *object, int first, int second);
extern int func_0C4968(Obj *o, int a, int b);
extern int func_1439E8(int i);
extern int func_0C5130(Obj *o, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0C4B00(Obj *o);

void func_0CED60(void)
{
    Pair buf[4];
    unsigned int i;
    int v;
    int j;

    func_0C4A08(&D_00378430, D_0024924C, 0x20800, 0);
    func_0B9040(0x1FB, buf, 0.0f);
    func_0C4D80(&D_00378430, buf[0].v, buf[1].v, buf[2].v, buf[3].v);
    func_0C4D68(&D_00378430, 0x1FA, 0xFFFFFFFF);
    func_0C4888(&D_00378430, 0x40602020, 0xFFB07050);
    for (i = 0xBB9; i < 0xBC6; i++) {
        j = i - 0xBB8;
        func_0C4968(&D_00378430, 1, 1);
        v = i + 15;
        if (v == 0xBCA) {
            if (D_0023CB2C->mode_24 == 2) {
                v = 0xBD6;
            }
        }
        func_0C5130(&D_00378430, func_1439E8(i), v, j, 0, 0, 1, 0, 0xFFFFFFFF);
    }
    D_00378430.flags_14 |= 0x14;
    func_0C4B00(&D_00378430);
}
