/* LEVEL_01:0x141F00 -- halves the object's three direction vectors, clears the record's head word and its four following slots and reports success. */
struct Rec {
    int w0;
    int items[4];
};

struct Obj {
    float v00[3];
    char pad0C[4];
    float v10[3];
    char pad1C[4];
    float v20[3];
    char pad2C[0x2C];
    struct Rec *rec;
};

static __inline__ void Half3(float *v)
{
    v[0] = v[0] * 0.5f;
    v[1] = v[1] * 0.5f;
    v[2] = v[2] * 0.5f;
}

int func_141F00(struct Obj *o)
{
    struct Rec *rec;
    unsigned int i;

    rec = o->rec;
    Half3(o->v20);
    Half3(o->v00);
    Half3(o->v10);
    for (i = 0; i < 4; i++) {
        rec->items[i] = 0;
    }
    rec->w0 = 0;
    return 1;
}
