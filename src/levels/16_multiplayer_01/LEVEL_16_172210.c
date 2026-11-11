/* LEVEL_16:0x172210 -- advances the object by its velocity scaled by ten times the step, plays the two-step effect, adds the scaled step to the linked record's timer, drops the record's two links when their targets are flagged, then lets the object finish when its check passes. */
struct Tgt {
    char pad00[0x64];
    unsigned int w64;
};

struct Rec {
    struct Tgt *f00;
    struct Tgt *f04;
    float f08;
};

struct Obj {
    char pad00[0x20];
    float vel[3];
    char pad2C[4];
    float pos[3];
    char pad3C[0x18];
    struct Rec *f54;
};

extern char D_001727C0[];

extern void func_08A058(char *a, struct Obj *o, int b, int idx);
extern int func_172548(struct Obj *o);
extern void func_06F940(struct Obj *o, int flag);

static __inline__ void Scale3(float *out, float *in, float k)
{
    out[0] = k * in[0];
    out[1] = k * in[1];
    out[2] = k * in[2];
}

static __inline__ void Add3(float *a, float *b)
{
    a[0] = a[0] + b[0];
    a[1] = a[1] + b[1];
    a[2] = a[2] + b[2];
}

void func_172210(struct Obj *o, float dt)
{
    float v[3];
    float s = dt * 10.0f;
    unsigned int i;
    struct Rec *r = o->f54;

    Scale3(v, o->vel, s);
    Add3(o->pos, v);
    for (i = 0; i < 2; i++) {
        func_08A058(D_001727C0, o, 0, i);
    }
    r->f08 = r->f08 + s;
    if (r->f00 != 0) {
        if ((r->f00->w64 & 6) != 0) {
            r->f00 = 0;
        }
    }
    if (r->f04 != 0) {
        if ((r->f04->w64 & 6) != 0) {
            r->f04 = 0;
        }
    }
    if (func_172548(o) != 0) {
        func_06F940(o, 1);
    }
}
