/* USA LEVEL_01.REL:0x17D5D0, 104-byte candidate (14 November 2026).
 * Measured pinned: 7 differing words; first difference at 0x8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct This17D5D0 {
    char pad00[0x30];
    char sub30[0x58 - 0x30];
    struct S17D5D0 *p58;
};

struct S17D5D0 {
    char pad00[0x190];
    float f190;
    char pad194[0x28C - 0x194];
    char sub28C[4];
};

extern int D_00235238;
extern void *func_024628(int a, int b);
extern void func_17D448(void *a, int b, void *c, int *d, float f);

void func_17D5D0(struct This17D5D0 *t)
{
    struct S17D5D0 *s;
    int *q;
    int three;
    int n;

    s = t->p58;
    q = (int *)((char *)func_024628(11, D_00235238) + 0x3C);
    three = 3;
    n = *q;
    if ((unsigned int)n >= 3U) {
        q = &three;
    }
    func_17D448(s->sub28C, *q, t->sub30, q, s->f190);
}
