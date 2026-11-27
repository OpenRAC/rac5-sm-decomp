/* LEVEL_02:0x180460 -- fades the object's grey level: state 0 raises the stored level toward 1, states 1-2 lower it toward one half; packs the level into an opaque grey colour word and counts the state down. */
typedef struct { char pad0[8]; float f8; } Inner;
typedef struct {
    char pad0[0x45];
    unsigned char b45;
    char pad46[0x58 - 0x46];
    Inner *inner;
    char pad5C[0x68 - 0x5C];
    unsigned int w68;
} Obj;

static __inline__ float *MinPtr(float *a, float *b)
{
    if (*a < *b)
        return a;
    return b;
}

static __inline__ float *MaxPtr(float *a, float *b)
{
    if (*b < *a)
        return a;
    return b;
}

void func_180460(Obj *o)
{
    Inner *in = o->inner;
    float a, b, c, d;
    unsigned int k;

    switch (o->b45) {
    case 0:
        a = in->f8 + 0.008333334f;
        b = 1.0f;
        in->f8 = *MinPtr(&a, &b);
        break;
    case 1:
    case 2:
        c = in->f8 - 0.016666668f;
        d = 0.5f;
        in->f8 = *MaxPtr(&c, &d);
        break;
    }
    k = (int)(in->f8 * 255.0f) & 0xFF;
    {
        unsigned int hi = k << 16;
        unsigned int mid = k << 8 | 0xFF000000;
        o->w68 = hi | mid | k;
    }
    if (o->b45 != 0)
        o->b45--;
}
