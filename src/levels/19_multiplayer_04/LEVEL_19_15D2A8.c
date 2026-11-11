/* LEVEL_19:0x15D2A8 -- sets a state byte and, on state 1, calls a helper with a global vector. */
struct Sub {
    char pad_00[0x2C];
    int w_2C;
    char pad_30[0x3C - 0x30];
    unsigned char b_3C;
};

struct Obj {
    char pad_00[0x45];
    unsigned char b_45;
    unsigned char b_46;
    char pad_47[0x58 - 0x47];
    struct Sub *p_58;
};

struct Vec {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1C;
    float f_20;
};

extern struct Vec *D_001BF020;
extern void func_073660(void *a, void *b, int c, int d, int e, int f, int g, int h, float x, float y, float z, float w);

void func_15D2A8(struct Obj *o, int v, int w)
{
    struct Sub *s = o->p_58;
    unsigned char m = (unsigned char)v;
    struct Vec *g;

    if (m == 1) {
        s->b_3C = 0;
        s->w_2C = 0;
        o->b_46 = 0;
        g = D_001BF020;
        if (g != 0) {
            func_073660(o, g, 0, 0, 0, 0, 0, 1, g->f_14, g->f_18, g->f_1C, g->f_20);
        }
    }
    o->b_45 = m;
}
