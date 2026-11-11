/* LEVEL_15:0x130EA8 -- recomputes the fade ramps of every record, then an unsigned-short key comparator. */

typedef struct Inner130EA8 {
    char pad_00[4];
    unsigned int w_04;
} Inner130EA8;

typedef struct Ret130EA8 {
    char pad_00[0x1C];
    Inner130EA8 *p_1C;
} Ret130EA8;

typedef struct Ref130EA8 {
    char pad_00[4];
    int w_04;
} Ref130EA8;

typedef struct Src130EA8 {
    char pad_00[0x40];
    Ref130EA8 *p_40;
    char pad_44[4];
    float f_48;
} Src130EA8;

typedef struct Rec130EA8 {
    char pad_00[0x40];
    float f_40;
    char pad_44[4];
    float f_48;
    float f_4C;
    float f_50;
    float f_54;
    char pad_58[0x14];
    Src130EA8 *p_6C;
} Rec130EA8;

typedef struct Glob130EA8 {
    char pad_00[0xE4];
    Rec130EA8 *p_E4;
    int n_E8;
} Glob130EA8;

typedef struct Key130EA8 {
    char pad_00[0x32];
    unsigned short key;
} Key130EA8;

extern Glob130EA8 D_002F3D20;

Ret130EA8 *func_069970(int a);

void func_130EA8(void)
{
    Rec130EA8 *p;
    Rec130EA8 *end;
    Src130EA8 *src;
    Ret130EA8 *r;
    float a;
    float b;
    float t;

    p = D_002F3D20.p_E4;
    end = p + D_002F3D20.n_E8;
    for (; p != end; p++) {
        src = p->p_6C;
        a = 100000.0f;
        b = 1.0f;
        r = func_069970(src->p_40->w_04);
        if (r->p_1C->w_04 >= 2) {
            a = p->f_40 * src->f_48 * 0.0625f + 200.0f;
            b = 100.0f;
        }
        p->f_48 = a * a;
        p->f_4C = (a + b) * (a + b);
        t = 2.0f / b;
        p->f_50 = t * a + 1.0f;
        p->f_54 = -t;
    }
}

int func_130FE0(Key130EA8 *x, Key130EA8 *y)
{
    return x->key - y->key;
}
