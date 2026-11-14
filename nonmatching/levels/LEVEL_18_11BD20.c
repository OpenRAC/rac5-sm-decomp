/* USA LEVEL_18.REL:0x11BD20, 160-byte candidate (14 November 2026).
 * Measured pinned: 16 differing words; first difference at 0x14.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern void func_11BD10(int slot, float a, float b);
extern float D_002E17B0[];
extern float D_002E17B8[];
extern unsigned char D_001B99C8[];
extern int D_001B99D0;

void func_11BD20(int slot, int flag, int word, float a, float b)
{
    float *p;

    func_11BD10(slot, a, b);
    p = &b;
    if (!(b < a))
        p = &a;
    D_002E17B0[slot] = *p;
    D_002E17B8[slot] = a;
    D_001B99D0 = word & 0xFF;
    D_001B99C8[slot] = flag;
}
