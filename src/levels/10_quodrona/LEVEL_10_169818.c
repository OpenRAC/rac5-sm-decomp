/* LEVEL_10:0x169818 -- switches the object to a new mode, resetting the child record and starting the matching effect. */

typedef struct Item169818 {
    char pad_00[0x64];
    int w_64;
} Item169818;

typedef struct Child169818 {
    char pad_00[8];
    Item169818 *p_08;
    char pad_0C[0xC];
    float f_18;
} Child169818;

typedef struct Obj169818 {
    char pad_00[0x45];
    unsigned char b_45;
    char pad_46[0x58 - 0x46];
    Child169818 *p_58;
    char pad_5C[0x70 - 0x5C];
    float f_70;
} Obj169818;

typedef struct Fx169818 {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
} Fx169818;

extern Fx169818 *D_0039F128[2];

void func_081000(Obj169818 *o, Fx169818 *fx, float a, float b, float c, float d, int e, int f, int g, int h, int i, int j);

void func_169818(Obj169818 *o, unsigned char state)
{
    Child169818 *c;
    Fx169818 *fx;

    c = o->p_58;
    switch (state) {
    case 0:
        c->f_18 = -2.8f;
        break;
    case 1:
        c->f_18 = -2.8f;
        o->f_70 = 30.0f;
        fx = D_0039F128[0];
        if (fx != 0) {
            func_081000(o, fx, fx->f_14, fx->f_18, fx->f_1C, fx->f_20, 0, 0, 0, 0, 0, 1);
        }
        break;
    case 2:
        if (c->p_08 != 0) {
            c->p_08->w_64 &= ~0x10;
            c->p_08 = 0;
        }
        c->f_18 = 0.0f;
        o->f_70 = 90.0f;
        break;
    case 3:
        c->f_18 = 0.0f;
        o->f_70 = 30.0f;
        fx = D_0039F128[1];
        if (fx != 0) {
            func_081000(o, fx, fx->f_14, fx->f_18, fx->f_1C, fx->f_20, 0, 0, 0, 0, 0, 1);
        }
        break;
    }
    o->b_45 = state;
}
