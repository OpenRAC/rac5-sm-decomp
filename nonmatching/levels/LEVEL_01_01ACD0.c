/* USA LEVEL_01.REL:0x01ACD0, 196-byte candidate (14 November 2026).
 * Measured pinned: 7 differing words; first difference at 0x78.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern unsigned int D_001EF420;
extern unsigned short D_001EF41E;
extern unsigned char D_001EF408;
extern int D_0020C310;
extern void func_01BA30(unsigned int a);
extern int func_027528(int a, int b);
extern void func_027548(int a, int b, int c);
extern void func_0B3C38(int *msg, int code, unsigned int v);

static __inline__ int Past(unsigned int v, unsigned int max)
{
    return v > max;
}

void func_01ACD0(void)
{
    unsigned int hit;

    D_001EF420 = 1 - D_001EF420;
    if (D_001EF420 == 0)
        return;
    hit = ((unsigned int (*)(unsigned int))func_01BA30)(D_001EF41E);
    D_001EF408 = hit;
    if (Past(D_001EF41E, 10))
        D_001EF41E = 0;
    if (D_001EF408 != 0 && func_027528(0x80, (unsigned char)D_001EF41E) != 0) {
        D_001EF408 = 0;
        func_0B3C38(&D_0020C310, -0x3A, 0xFFFFFFFF);
        func_027548(0x80, D_001EF41E, 0);
    }
    D_001EF41E++;
}
