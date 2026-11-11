/* LEVEL_05:0x187BB0 -- damps and re-normalises an object's direction when its probe vector is not degenerate; reports whether it is aligned. */
typedef struct Obj {
    float v[3];
    char pad0c[0x14];
    float w[3];
    char pad2c[0x2C];
    void *w58;
} Obj;

typedef struct Stack3 {
    float p[4];
    float q[4];
    float r[4];
} Stack3;

extern char D_00211110[];
extern float sqrtf(float x);
extern float fabsf(float x);
extern void func_186FB0(Obj *o, float *a, float *b, float *c);
extern void func_0141D8(Obj *o, void *w, float *b, char *tbl);

static inline int is_tiny(float x)
{
    return fabsf(x) <= 1e-5f;
}

int func_187BB0(Obj *o, float *out)
{
    Stack3 st;
    void *wk = o->w58;
    int res = 0;
    unsigned char still;
    float dot, len2, inv;
    float *w;

    func_186FB0(o, st.q, st.p, st.r);
    still = is_tiny(st.r[0]);
    if (still) {
        if (out)
            *out = st.r[0];
        return 1;
    }
    w = o->w;
    w[0] *= 0.2f;
    w[2] *= 0.2f;
    func_0141D8(o, wk, st.p, D_00211110);
    dot = st.p[0] * w[0] + st.p[1] * w[2];
    if (dot >= 0.99f)
        res = 1;
    w[0] *= 5.0f;
    w[2] *= 5.0f;
    len2 = o->v[0] * o->v[0] + o->v[1] * o->v[1] + o->v[2] * o->v[2];
    if (!(len2 < 2.384185791015625e-07f)) {
        inv = 5.0f / sqrtf(len2);
        o->v[0] *= inv;
        o->v[1] *= inv;
        o->v[2] *= inv;
    }
    if (out)
        *out = st.r[0];
    return res;
}
