/* LEVEL_04.REL:0x1D5F68: reviewed 320-byte candidate, held for ABI review.
 * Finds the tracked object closest to a point in the ground plane and reports
 * its squared distance.
 * gnu-ee-trial C with gnu-ee-trial links 320/320 bytes and is byte-exact at
 * this and 1 other USA placement, but the prototypes disagree.
 * It declares func_171AF0 returning pointer with (pointer), but the accepted
 * LEVEL_04_171AF0.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern unsigned char *func_171AF0(unsigned char *o);

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

unsigned char *func_1D5F68(unsigned char *a0, float *a1, float *a2)
{
    unsigned char *st;
    unsigned char *best;
    unsigned char *base;
    unsigned char *o;
    unsigned char *t;
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
                best = o;
            }
        } else {
            t = func_171AF0(o);
            if (t != 0) {
                d = dist2_1D5F68(t, a1);
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
