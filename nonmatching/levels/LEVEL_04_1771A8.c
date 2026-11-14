/* USA LEVEL_04.REL:0x1771A8, 180-byte candidate (14 November 2026).
 * Measured pinned: 9 differing words; first difference at +0x10.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern char *D_00221E2C;

static __inline__ float Dist2(float *a, float *b)
{
    float dx;
    float dy;

    dx = a[0] - b[0];
    dy = a[2] - b[1];
    return dx * dx + dy * dy;
}

char *func_1771A8(char *obj)
{
    char *g;
    char *q;
    char *e;
    char *best;
    float best_d;
    float t[2];
    float d;
    unsigned int i;
    unsigned int n;

    g = D_00221E2C;
    i = 0;
    best = 0;
    best_d = 1.0000000150474662e+30f;
    q = *(char **)(g + 0x58);
    n = *(unsigned char *)(q + 0x60);
    if (n != 0) {
        do {
            q = *(char **)(g + 0x58);
            e = *(char **)(q + 0x40 + i * 4);
            t[0] = *(float *)(e + 0x30) + (*(float *)(e + 0x20) + *(float *)(e + 0x20));
            t[1] = *(float *)(e + 0x38) + (*(float *)(e + 0x28) + *(float *)(e + 0x28));
            d = Dist2((float *)(obj + 0x30), t);
            i = i + 1;
            if (d < best_d) {
                best_d = d;
                best = e;
            }
        } while (i < n);
    }
    return best;
}
