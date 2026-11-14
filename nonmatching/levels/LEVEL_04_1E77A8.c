/* USA LEVEL_04.REL:0x1E77A8, 152-byte candidate (14 November 2026).
 * Measured pinned: 22 differing words; first difference at 0x28.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int rand(void);
extern int D_0022286C;

struct Ent { char p0[0x29]; unsigned char f29; char p1[0x2C - 0x2A]; int f2C; };

void func_1E77A8(struct Ent *a0, int a1)
{
    if (a0->f29 == 0) {
        D_0022286C = D_0022286C - 1;
    }
    a0->f29 = a1;
    if (a1 == 0) {
        D_0022286C = D_0022286C + 1;
        a0->f2C = rand() % 0x96 + 0x96;
    } else if (a1 == 2) {
        a0->f2C = rand() % 9 + 6;
    }
}
