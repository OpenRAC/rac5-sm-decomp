/* LEVEL_03:0x17AF10 -- picks a base offset from two box-distance checks, stores a flag, calls helper. */
struct V4 {
    float x_00;
    float y_04;
    float z_08;
    float w_0c;
};

struct S58 {
    unsigned short h_00;
    unsigned char b_02;
    unsigned char f_03;
    void *w_04;
};

struct Obj {
    char pad_00[0x58];
    struct S58 *p_58;
};

extern char D_0024A578[];
extern int func_081B70(struct V4 *a, struct V4 *b, void *c);
extern void func_094EA0(char *base, struct S58 *s, struct V4 *a, struct V4 *b, unsigned int flags);

void func_17AF10(struct Obj *o)
{
    struct S58 *s;
    struct V4 a;
    struct V4 b;
    unsigned int flag;
    int bad;
    float dx;
    float dz;

    s = o->p_58;
    bad = s->h_00 != 0xFFFF;
    if (bad) {
        return;
    }
    if (func_081B70(&a, &b, s->w_04) == 0) {
        return;
    }
    dx = b.x_00 - a.x_00;
    dz = b.z_08 - a.z_08;
    if (8.0f < dx || 8.0f < dz) {
        flag = 1;
    } else {
        flag = 0;
    }
    s->f_03 = flag;
    func_094EA0(D_0024A578 + flag * 0x68, s, &a, &b, 0x1511);
}
