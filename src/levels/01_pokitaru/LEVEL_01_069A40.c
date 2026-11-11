/* LEVEL_01:0x069A40 -- toggles the held-state bit from the input mask and advances the state machine. */

typedef struct Cfg069A40 {
    char pad_00[0x24];
    int w_24;
} Cfg069A40;

typedef union Bits069A40 {
    long long q;
    unsigned char b[8];
} Bits069A40;

typedef struct Obj069A40 {
    char pad_00[0xD4];
    unsigned int w_D4;
    char pad_D8[0xE7C - 0xD8];
    int w_E7C;
    char pad_E80[0xF10 - 0xE80];
    Bits069A40 bits;
    char pad_F18[0x1C];
    float f_F34;
    char pad_F38[4];
    float f_F3C;
    char pad_F40[4];
    float f_F44;
    float f_F48;
} Obj069A40;

extern Cfg069A40 *D_001F3FAC;

extern int func_0B6020(int index);

void func_069A40(Obj069A40 *o)
{
    Cfg069A40 *g;
    int mode;
    unsigned int w;
    unsigned int m;
    int changed;

    changed = 0;
    g = D_001F3FAC;
    w = o->w_D4;
    mode = g->w_24;
    if (mode == 2) {
        m = w & 0x400;
    } else {
        m = w & 0x100;
    }
    if ((mode == 2 && m != 0x400) || (mode != 2 && m != 0x100)) {
        if ((o->bits.b[0] & 1) == 0) {
            o->bits.q |= 1;
            changed = 1;
            func_0B6020(7);
        }
    } else {
        o->bits.q &= ~1LL;
    }
    switch (o->w_E7C) {
    case 1:
        if (changed) {
            o->bits.q |= 0x40;
            o->w_E7C = 4;
        }
        break;
    case 2:
        if (changed) {
            o->w_E7C = 3;
            o->f_F48 = 0.16666667f;
            o->f_F34 = o->f_F3C;
            o->f_F44 = 0.0f;
        }
        break;
    case 3:
        if (o->f_F44 >= 1.0f) {
            o->w_E7C = 4;
        }
        break;
    }
}
