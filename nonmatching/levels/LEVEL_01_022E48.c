/* USA LEVEL_01.REL:0x022E48, 268-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 20 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float dir[3];
    float dist2;
} Contact;

extern int func_022C50(Contact *c);
extern float sqrtf(float x);

int func_022E48(float *out, float step)
{
    Contact c[6];
    float d[3];
    Contact *p;
    Contact *end;
    float k;
    int n;

    n = func_022C50(c);
    if (n == 0) {
        return 0;
    }
    out[0] = 0.0f;
    out[1] = 0.0f;
    out[2] = 0.0f;
    end = c + n;
    for (p = c; p != end; p++) {
        k = 1.0f - step / sqrtf(p->dist2);
        d[0] = k * p->dir[0];
        out[0] = out[0] + d[0];
        d[1] = k * p->dir[1];
        out[1] = out[1] + d[1];
        d[2] = k * p->dir[2];
        out[2] = out[2] + d[2];
    }
    return 1;
}
