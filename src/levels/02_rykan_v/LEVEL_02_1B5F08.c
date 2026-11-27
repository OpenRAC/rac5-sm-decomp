/* LEVEL_02:0x1B5F08 -- starts the indexed effect unless the object is in a late state, the link is missing or the link's kind is one of three excluded values; returns 3 when started, 1 otherwise. */
struct Obj {
    char pad_00[0x45];
    unsigned char b_45;
    char pad_46[0x54 - 0x46];
    char *p_54;
};

struct Kind {
    char pad_00[0x3F];
    unsigned char b_3F;
};

struct Link {
    char pad_00[0x40];
    struct Kind *p_40;
};

extern float D_0023D8E8[];
extern float D_0023D8F8[];
extern void func_1E2D58(char *a0, struct Obj *a1, int a2, int a3, struct Link *t0, float f12, float f13);
extern void func_1B5FC0(struct Obj *a0, int a1, int a2);

int func_1B5F08(struct Obj *o, int unused, int idx, int a3, int a4, struct Link *l)
{
    int k;

    if (o->b_45 < 0x10 && l != 0) {
        k = l->p_40->b_3F;
        if (k != 3 && k != 0xD && k != 0xB) {
            func_1E2D58(o->p_54 + 0x30, o, a3, a4, l, D_0023D8E8[idx], D_0023D8F8[idx]);
            func_1B5FC0(o, o->b_45, 0x11);
            return 3;
        }
    }
    return 1;
}
