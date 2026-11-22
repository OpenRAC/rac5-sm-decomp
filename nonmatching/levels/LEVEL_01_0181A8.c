/* USA LEVEL_01.REL:0x0181A8, 244-byte candidate (21 November 2026).
 * Measured pinned: 3 differing words; first difference at 0xB8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int target;
    unsigned int mask;
} Entry;

extern Entry D_001EF2C0[];
extern unsigned int D_001EF3C0;
extern unsigned int D_001EF3C4;
extern unsigned int D_001EF3C8;
extern unsigned char D_001EF3D8;

extern int func_019670(void);
extern int func_084708(int a, int b);
extern void func_0182A0(unsigned int bits);

void func_0181A8(void)
{
    unsigned int bits;
    unsigned int i;
    int cur;
    Entry *e;

    bits = 0;
    cur = func_019670();
    if (D_001EF3D8 != 0 && cur != 0) {
        i = 0;
        if (D_001EF3C0 != 0) {
            e = D_001EF2C0;
            do {
                if (e->target != 0 && func_084708(e->target, cur) != 0) {
                    bits |= e->mask;
                }
                i++;
                e++;
            } while (i < D_001EF3C0);
        }
    }
    bits &= ~D_001EF3C4;
    bits |= D_001EF3C8;
    if (bits != 0) {
        func_0182A0(bits);
    }
    D_001EF3C8 = 0;
    D_001EF3C4 = 0;
}
