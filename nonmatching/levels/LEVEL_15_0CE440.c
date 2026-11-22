/* USA LEVEL_15.REL:0x0CE440, 248-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 23 differing words; first difference at 0x5C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Rec {
    float f_00;
    float pos[3];
    char pad_10[0x18];
    float dir[3];
    float *src;
} Rec;

extern Rec *func_07B5A8(int *ok, int a1, int n);
extern void func_0E6E40(float *a, float *b, void *c);

void func_0CE440(int a1, float *p, void *tbl, float *d, float *s)
{
    int ok;
    Rec *r;
    float k;
    float x;
    float y;
    float z;
    float *rp;
    float *rd;

    r = func_07B5A8(&ok, a1, 1);
    if (ok != 0) {
        k = -*s;
        x = k * d[0];
        z = k * d[2];
        y = k * d[1];
        rp = r->pos;
        r->f_00 = 1.0f;
        rp[0] = p[0] - x;
        rp[2] = p[2] - z;
        rp[1] = p[1] - y;
        func_0E6E40((float *)((char *)r + 0x10), (float *)((char *)r + 0x1C), tbl);
        rd = r->dir;
        rd[0] = x;
        rd[1] = y;
        rd[2] = z;
        r->src = s;
    }
}
