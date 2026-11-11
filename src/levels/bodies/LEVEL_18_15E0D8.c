/* LEVEL_18:0x15E0D8 -- traces a ray from the view (or the object) along its facing and records the hit point in the effect block, or clears the hit flag. */
extern char D_001D65E8[];
extern int func_111BF0(char *o);
extern void func_036608(int h);
extern char *func_000E40(void);
extern void func_103040(float *out, char *o, char *tbl);
extern int func_01F1E8(float dist, float *pd, float *hit, float *from, float *dir, int m1, int m2, int ctx);

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

static __inline__ void FromObj(float *from, float *dir, char *o)
{
    func_103040(from, o, D_001D65E8);
    Copy3(dir, (float *)(o + 0x20));
}

void func_15E0D8(char *o)
{
    float hit[8];
    float from[4];
    float dir[4];
    float dist;
    char *ctl;
    char *tgt;
    char *p;
    unsigned char ok;

    dist = 1000.0f;
    ctl = *(char **)(o + 0x58);
    tgt = *(char **)(o + 0x54);
    if (func_111BF0(o) != 0 && *(unsigned char *)(tgt + 4) == 1) {
        FromObj(from, dir, o);
    } else {
        func_036608(*(int *)ctl);
        p = func_000E40();
        if (p != 0) {
            Copy3(from, (float *)(p + 0x30));
            Copy3(dir, (float *)(p + 0x20));
        } else {
            FromObj(from, dir, o);
        }
    }
    ok = func_01F1E8(dist, &dist, hit, from, dir, 0x129, 0x101, 0);
    if (ok) {
        MulAdd3((float *)(ctl + 0x10), from, dir, dist);
        *(unsigned char *)(ctl + 0x2C) = 1;
    } else {
        *(unsigned char *)(ctl + 0x2C) = 0;
    }
}
