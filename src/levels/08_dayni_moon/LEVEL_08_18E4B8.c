/* LEVEL_08:0x18E4B8 -- runs a forward then a backward probe and flags the object if both miss. */
struct Obj {
    char pad0[0x30];
    float vec[4];
    char pad1[5];
    unsigned char flag;
    char pad2[0xE];
    int *ctx;
};

extern int *func_1FA3F0(int a, struct Obj *o, float *v, int c, int d, float f0, float f1, float f2, float f3);

static __inline__ int ValueOf(int *r)
{
    int v = 0;
    if (r)
        v = *r;
    return v;
}

int func_18E4B8(struct Obj *o)
{
    int *ctx = o->ctx;
    int v;

    v = ValueOf(func_1FA3F0(*ctx, o, o->vec, 0, 0, 0.0f, 1.0000000150474662e+30f, 0.8660253882408142f, 1.000100016593933f));
    if (v == 0) {
        v = ValueOf(func_1FA3F0(*ctx, o, o->vec, 0, 0, 0.0f, 1.0000000150474662e+30f, -1.0f, 1.000100016593933f));
        if (v == 0)
            o->flag = 1;
    }
    return v;
}
