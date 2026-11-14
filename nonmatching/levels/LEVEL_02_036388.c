/* USA LEVEL_02.REL:0x036388, 156-byte candidate (14 November 2026).
 * Measured pinned: 2 differing words; first difference at 0x28.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct A { char p0[0x58]; char *f58; };
extern void func_073880(void *a);
extern void func_073348(void *a);

void func_036388(struct A *a0)
{
    void **base;
    void **p;
    unsigned int k;
    unsigned int i;
    unsigned int j;

    base = (void **)(a0->f58 + 0x90);
    for (i = 0; i < 2; i++) {
        k = 3 * i;
        p = (void **)(k * 4 + (int)base);
        for (j = 0; j < 3; j++) {
            if (*p != 0) {
                func_073880(*p);
                func_073348(*p);
                *p = 0;
            }
            p++;
        }
    }
}
