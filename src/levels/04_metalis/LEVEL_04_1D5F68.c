/* LEVEL_04:0x1D5F68 -- finds the tracked object closest to a point in the ground plane and reports its squared distance. */

extern int func_171AF0(char *object);

static __inline__ float dist2_1D5F68(unsigned char *o, float *p)
{
    float dx;
    float dz;

    dx = *(float *)(o + 0x30) - p[0];
    dz = *(float *)(o + 0x38) - p[2];
    return dx * dx + dz * dz;
}

static __inline__ int grounded_1D5F68(unsigned char *o)
{
    return o[0x45] == 2;
}

int func_1D5F68(unsigned char *a0, float *a1, float *a2)
{
    unsigned char *st;
    int best;

    unsigned char *base;
    unsigned char *o;
    int t;
    float bestd;
    float d;
    unsigned int i;

    st = *(unsigned char **)(a0 + 0x58);
    best = 0;
    bestd = 1.0e30f;
    base = *(unsigned char **)(a0 + 0x54);
    for (i = 0; i < st[0x49]; i++) {
        o = ((unsigned char **)(base + 0x50))[i];
        if (grounded_1D5F68(o)) {
            d = dist2_1D5F68(o, a1);
            if (d < bestd) {
                bestd = d;
                best = (int)o;
            }
        } else {
            t = func_171AF0((char *)o);
            if (t != 0) {
                d = dist2_1D5F68((unsigned char *)t, a1);
                if (d < bestd) {
                    bestd = d;
                    best = t;
                }
            }
        }
    }
    if (a2 != 0) {
        *a2 = bestd;
    }
    return best;
}
