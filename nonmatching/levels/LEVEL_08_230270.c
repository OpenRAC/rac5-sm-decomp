/* USA LEVEL_08.REL:0x230270, 360-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad --as: 2 differing words; first difference at
 * 0x90.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Ctx {
    void *a;
    void *b;
    void *c;
    float t;
} Ctx;

typedef struct Rate {
    float lo;
    float hi;
    void *tag;
    char pad_0C[0x64];
    int owner;
    char pad_74[8];
} Rate;

typedef struct Src {
    char pad0[0xB0];
    Rate r[2];
} Src;

typedef struct Dst {
    char pad0[0x60];
    float ph[2];
} Dst;

struct Blend {
    int f0;
    int f4;
    float *key;
    float t;
};

extern float floorf(float x);
extern void func_115A00(void *a, void *b, int c);
extern void func_22FCA0(int unused, struct Blend *p, void *q, float u, float v);

void func_230270(Dst *dst, Src *src, float t)
{
    Ctx ctx;
    struct Blend *bp;
    unsigned i;
    float *php;

    func_115A00(dst, (char *)src + 0x10, 2);
    ctx.a = (char *)dst + 0x30;
    bp = (struct Blend *)&ctx;
    ctx.b = (char *)dst + 0x48;
    ctx.t = t;
    php = dst->ph;
    for (i = 0; i < 2; php++, i++) {
        float lo;
        float v;
        float inv;
        float p, q, n;
        int owner;

        lo = src->r[i].lo;
        owner = src->r[i].owner;
        ctx.c = &src->r[i].tag;
        v = (src->r[i].hi - lo) * t + lo;

        if (v != 0.0f)
            inv = 1.0f / v;
        else
            inv = 0.0f;
        p = *php;
        q = p + v;
        n = floorf(q);
        if (n > 0.0f) {
            func_22FCA0(owner, bp, (void *)(int)n, (1.0f - p) * inv, inv);
            *php = q - n;
        } else {
            *php = q;
        }
    }
}
