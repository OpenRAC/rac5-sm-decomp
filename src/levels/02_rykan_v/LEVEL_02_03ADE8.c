/* LEVEL_02:0x03ADE8 -- placement copy of LEVEL_01_0363A0.c: stores a move request on an object, deriving a facing direction or a random fallback. */
extern float sqrtf(float x);
extern float fabsf(float x);
extern int rand(void);

typedef struct S24 {
    float f[6];
} S24;

typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Y {
    unsigned char pad[0x28];
    unsigned char *p28;
} Y;

typedef struct X {
    unsigned char pad[0x1C];
    Y *p1C;
} X;

typedef struct G {
    unsigned char pad0[0xB0];
    S24 s;
    float fC8;
    Vec3 to;
    float dir[3];
} G;

extern void func_038B00(G *g, X *x, int a);
extern void func_038FA8(G *g, X *x, unsigned char *p);
extern void func_127C48(float *v, float a, float b);

static inline unsigned char Norm(float *dp, Vec3 *d)
{
    float len2;
    float inv;

    len2 = d->x * d->x + d->y * d->y + d->z * d->z;
    if (len2 < 2.3841858e-7f) {
        return 0;
    }
    inv = 1.0f / sqrtf(len2);
    dp[0] = inv * d->x;
    dp[1] = inv * d->y;
    dp[2] = inv * d->z;
    return 1;
}

void func_03ADE8(G *g, S24 *s, int xa, int idx, Vec3 *to, Vec3 *from, float f)
{
    X *x = (X *)xa;
    Vec3 d;
    float *dp;
    float r;
    float hi;
    int q;

    g->s = *s;
    if (idx < 0) {
        func_038B00(g, x, 0xFFFF);
    } else {
        func_038FA8(g, x, x->p1C->p28 + idx * 0x14);
    }
    g->fC8 = f;
    dp = g->dir;
    g->to = *to;
    d.x = to->x - from->x;
    d.y = to->y - from->y;
    d.z = to->z - from->z;
    if (!Norm(dp, &d)) {
        r = (float)rand();
        q = (int)(r * 7.826379260222893e-06f);
        hi = (float)q;
        func_127C48(dp, r, fabsf((r - hi * 127773.0f) * 16807.0f - hi * 2836.0f));
    }
}
