/* USA LEVEL_02.REL:0x0364B8, 332-byte candidate (21 November 2026).
 * Measured pinned: 3 differing words; first difference at 0x1C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern void func_160D58(int a0);
extern float D_00222AA0[3][3];

static __inline__ void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static __inline__ void AddScaled(float *dst, float *src, float s)
{
    dst[0] += src[0] * s;
    dst[1] += src[1] * s;
    dst[2] += src[2] * s;
}

void func_0364B8(char *obj, float *v, float *m, int n)
{
    char *base;
    unsigned int i;
    float *d;
    float tmp[3];

    base = *(char **)(obj + 0x58);
    func_160D58(*(int *)(base + n * 4 + 4));
    for (i = 0; i < 3; i++) {
        d = D_00222AA0[i];
        tmp[0] = v[0];
        tmp[1] = v[1];
        tmp[2] = v[2];
        AddScaled(tmp, m, d[0]);
        AddScaled(tmp, m + 4, d[1]);
        AddScaled(tmp, m + 8, d[2]);
        Copy3((float *)(base + (n * 3 + i) * 12 + 12), tmp);
    }
}
