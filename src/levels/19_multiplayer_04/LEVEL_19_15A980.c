/* LEVEL_19:0x15A980 -- stores a value in a sub-record; positive float selects one helper, otherwise another. */
struct Sub58 {
    char pad_00[0xE0];
    int w_e0;
};

struct Obj {
    char pad_00[0x58];
    struct Sub58 *p_58;
};

struct Gv {
    char pad_00[0x14];
    float f_14;
    float f_18;
    float f_1c;
    float f_20;
};

extern struct Gv *D_001BEFE4;
extern void func_06FE08(void *o, int a, int b, int c, float f, float g);
extern void func_06FC38(void *o, int a, float f);
extern void func_15A578(void *o, int a, int b);
extern void func_073660(void *o, void *g, int a, int b, int c, int d, int e, int f, float x, float y, float z, float w);

void func_15A980(struct Obj *o, int val, float f)
{
    struct Sub58 *s;

    s = o->p_58;
    s->w_e0 = val;
    if (0.0f < f) {
        func_06FE08(o, val, 0, 1, f, 0.0f);
    } else {
        func_06FC38(o, val, 0.0f);
    }
}

void func_15A9C8(struct Obj *o)
{
    struct Gv *g;

    func_15A578(o, 3, 0);
    g = D_001BEFE4;
    if (g != 0) {
        func_073660(o, g, 0, 0, 0, 0, 0, 1, g->f_14, g->f_18, g->f_1c, g->f_20);
    }
}
