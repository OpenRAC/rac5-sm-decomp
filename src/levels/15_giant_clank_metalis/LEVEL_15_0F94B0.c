/* LEVEL_15:0x0F94B0 -- callback on an embedded member (owner = member - 0x50): tests the owner's axis vector against the swept query with the helper (the way the accepted LEVEL_15:019448 does), then asks the second helper for the contact when the first accepts. */
extern float sqrtf(float x);
extern int func_0E1A68(void *a0, void *a1, float *a2, float *a3, float *t0, float *t1, float *t2,
                       float *t3, float f12, float f13, float f14);
extern int func_0DB020(float *a, float *b, float *c, float *d, float *e, float f12, float f13,
                       char *f, float *g, int h);
extern int D_002F3E14;

typedef struct Hit {
    float t;
    float n[3];
    float u;
    float v;
} Hit;

typedef struct Owner {
    float v[3];
    char pad0C[0x40];
    char *info;
} Owner;

static __inline__ int Second(void *a0, void *a1, float *m, float *base, float *dir, float p2,
                             float p3)
{
    float len2;
    float len;

    len2 = m[0] * m[0] + m[1] * m[1] + m[2] * m[2];
    len = sqrtf(len2);
    return (unsigned char)func_0E1A68(a0, a1, m, m + 3, m + 6, m + 9, base, dir, p2, len2, p3 * len);
}

int func_0F94B0(char *member, float *base, float *dir, float p2, float p3)
{
    Owner *ow = (Owner *)(member - 0x50);
    char *info = ow->info;
    Hit hit;

    if (Second(info + 0x34, info + 0x40, ow->v, base, dir, p2, p3) == 0 || func_0DB020(&hit.u, &hit.v, &hit.t, base, dir, p2, p3, info, ow->v, D_002F3E14) == 0)
        return 0;
    return 1;
}
