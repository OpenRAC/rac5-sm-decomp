/* LEVEL_04:0x1C7E88 -- rescales three direction vectors of a basis to the requested lengths. */
extern float sqrtf(float x);

typedef struct Basis {
    float a[4];
    float b[4];
    float c[4];
} Basis;

static inline void set_len(float *v, float len)
{
    float len2;
    float k;

    len2 = v[0] * v[0] + v[1] * v[1] + v[2] * v[2];
    if (!(len2 < 2.3841858e-07f)) {
        k = len / sqrtf(len2);
        v[0] *= k;
        v[1] *= k;
        v[2] *= k;
    }
}

void func_1C7E88(Basis *m, float la, float lb, float lc)
{
    set_len(m->c, la);
    set_len(m->a, lb);
    set_len(m->b, lc);
}
