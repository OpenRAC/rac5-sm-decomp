/* LEVEL_17:0x15E868 -- traces a ray from the object (or the picked actor) along its facing and records the hit point in the effect block, or clears the hit flag. */
extern char D_001C8730[];
extern void func_037618(int h);
extern char *func_000DD0(void);
extern void func_103D88(float *out, char *o, char *tbl);
extern int func_01F520(float dist, float *pd, float *hit, float *from, float *dir, int m1, int m2, int ctx);

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static __inline__ void MulAdd3(float *d, float *a, float *b, float t)
{
    d[0] = a[0] + b[0] * t;
    d[1] = a[1] + b[1] * t;
    d[2] = a[2] + b[2] * t;
}

void func_15E868(char *o)
{
    float hit[8];
    float from[4];
    float dir[4];
    float dist;
    char *ctl;
    char *tgt;
    char *p;

    dist = 1000.0f;
    ctl = *(char **)(o + 0x58);
    tgt = *(char **)(o + 0x54);
    func_037618(*(int *)ctl);
    p = func_000DD0();
    if (p != 0) {
        Copy3(from, (float *)(p + 0x30));
        Copy3(dir, (float *)(p + 0x20));
    } else {
        func_103D88(from, o, D_001C8730);
        Copy3(dir, (float *)(o + 0x20));
    }
    if (func_01F520(dist, &dist, hit, from, dir, 0x129, 0x101, *(int *)tgt)) {
        MulAdd3((float *)(ctl + 0x10), from, dir, dist);
        *(unsigned char *)(ctl + 0x1C) = 1;
    } else {
        *(unsigned char *)(ctl + 0x1C) = 0;
    }
}
