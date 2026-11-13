/* USA LEVEL_16.REL:0x1184C8, 108-byte candidate.
 * Measured pinned/gnu-ee-trial: 108 linked bytes; first differing word +0x20.
 * Recover the observed types and lifetimes before retrying the same mismatch class.
 */
typedef struct { char *p0; int p1; unsigned int p2; int p3; int p4; } Record;
extern unsigned int D_002E00C0;
extern Record D_002DFEE0[];
void func_1184C8(char *a, int b, unsigned int c, int d, int e)
{
    unsigned int n = D_002E00C0;
    if (n < 24U) {
        Record *r = &D_002DFEE0[n];
        D_002E00C0 = n + 1;
        r->p0 = a;
        r->p4 = e / 2;
        r->p2 = c;
        r->p1 = b;
        r->p3 = d / 2;
    }
}
