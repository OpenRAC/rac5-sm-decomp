/* LEVEL_04:0x170E18 -- randomizes the object's launch parameters and signs, then reports its raised position to a helper. */

struct Sub170E18 {
    char pad0[0x40];
    float f40;
    float f44;
    float f48;
    int w4C;
    char pad50[0xC];
    float f5C;
};

struct Obj170E18 {
    char pad0[0x30];
    float f30;
    float f34;
    float f38;
    char pad3C[9];
    unsigned char b45;
    char pad46[0x12];
    struct Sub170E18 *p58;
};

extern int rand(void);
extern void func_11CB68(float *v, float *p);

static __inline__ int RandMod_170E18(int n)
{
    return rand() % n;
}

static __inline__ void Copy3_170E18(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

void func_170E18(struct Obj170E18 *o)
{
    struct Sub170E18 *s;
    float v[3];
    float lo;
    float span;

    s = o->p58;
    lo = 2.0f;
    span = 3.0f;
    s->f44 = (float)rand() * 4.656612873077393e-10f * span + lo;
    s->f40 = (float)rand() * 4.656612873077393e-10f * 0.5f + 0.5f;
    s->f48 = (float)rand() * 4.656612873077393e-10f * 0.5f + 0.5f;
    if (RandMod_170E18(2) != 0) {
        s->f40 = -s->f40;
    }
    if (RandMod_170E18(2) != 0) {
        s->f48 = -s->f48;
    }
    s->w4C = 0;
    Copy3_170E18(v, &o->f30);
    v[1] = v[1] + 0.15000000596046448f;
    func_11CB68(v, &s->f5C);
    s->f5C = s->f5C - 0.15000000596046448f;
    o->b45 = 1;
}
