/* LEVEL_04:0x170BB0 -- calls a virtual hook on the argument, then sets up a sub-record and two helpers. */
struct Vt {
    char pad_00[0x20];
    int (*fn_20)(void *a, int b, int c, int d, int e, int f, float g);
};

struct Arg {
    char pad_00[0x40];
    struct Vt *p_40;
};

struct Sub58 {
    char pad_00[0x54];
    float f_54;
    char pad_58[0x30];
    void *p_88;
};

struct Top {
    char pad_00[0x45];
    unsigned char b_45;
    char pad_46[0x12];
    struct Sub58 *p_58;
};

extern void func_0E3290(void *a, void *b, float f12, float f13);
extern void func_170C60(void *a);
extern void func_1707E0(void *a);

void func_170BB0(struct Top *o, struct Arg *a)
{
    struct Sub58 *s;
    float tmp[4];

    s = o->p_58;
    a->p_40->fn_20(a, 2, 1, 0, 0, 0, -4.0f);
    func_0E3290(s, a, 4.0f, 0.2f);
    func_170C60(o);
    func_1707E0(o);
    s->p_88 = a;
    s->f_54 = 45.0008965f;
    o->b_45 = 2;
}
