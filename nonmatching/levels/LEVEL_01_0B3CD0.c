/* USA LEVEL_01.REL:0x0B3CD0, 156-byte candidate (14 November 2026).
 * Measured pinned: 29 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Slot {
    int w0;
    float f4;
    float f8;
    signed char b0C;
    char pad0D[3];
};

extern struct Slot D_00327C60[];
extern unsigned char D_001FC2F8[];
extern int D_001FC2C0[];
extern int D_001FC2D0[];
extern unsigned char D_001FC300[];
extern int D_001FC310[];

void func_0B3CD0(int idx)
{
    D_00327C60[idx].w0 = 0;
    D_00327C60[idx].f4 = 1.0f;
    D_00327C60[idx].f8 = 0.1f;
    D_001FC2F8[idx] = 1;
    D_00327C60[idx].b0C = -1;
    D_001FC2C0[idx] = 0;
    D_001FC2D0[idx] = 0;
    D_001FC300[idx] = 0;
    D_001FC310[idx] = 0;
}
