/* LEVEL_01:0x15D498 -- flags an entry, builds a normalized cross product of two vectors into its slot. */
typedef struct Body {
    char pad0[0x20];
    float a[8][4];
    float b[8][4];
    char pad1[0x140 - 0x120];
    unsigned char flags[8];
} Body;

typedef struct Obj {
    char pad0[0x54];
    Body *body;
} Obj;

extern char D_0021EC40[];
extern float sqrtf(float x);
extern void func_126100(float *e, float *s, char *d);

static __inline__ void Cross(float *out, float *a, float *b)
{
    out[0] = a[1] * b[2] - a[2] * b[1];
    out[1] = a[2] * b[0] - a[0] * b[2];
    out[2] = a[0] * b[1] - a[1] * b[0];
}

static __inline__ void Normalize(float *v)
{
    float len = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    float inv;

    if (len < 2.3841858e-07f) {
        return;
    }
    inv = 1.0f / sqrtf(len);
    v[0] = v[0] * inv;
    v[1] = v[1] * inv;
    v[2] = v[2] * inv;
}

void func_15D498(Obj *o, float *s, int idx)
{
    Body *b = o->body;

    b->flags[idx] |= 2;
    func_126100(b->a[idx], s, D_0021EC40);
    Cross(b->b[idx], s + 4, b->a[idx]);
    Normalize(b->b[idx]);
}
