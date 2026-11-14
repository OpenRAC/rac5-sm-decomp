/* USA LEVEL_01.REL:0x1DB820, 168-byte candidate (14 November 2026).
 * Measured pinned: 9 differing words; first difference at 0x68.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct { float x, y, z; } V3;
typedef struct { int w0; unsigned int w4; } Rec;

extern int D_00209668;
extern V3 D_00217E68;
extern void func_0DD328(int a0, int a1, int a2, V3 *pos, float f12, float pitch, int t0, float f14, float f15, float f16);

void func_1DB820(Rec *r)
{
    float q;

    q = (float)(r->w4 >> 24) / 6.000119f;
    func_0DD328(D_00209668, r->w4, r->w0, &D_00217E68, 0.2f, 0.10000000894069672f, 0, 6.000119f, q, 0.15f);
}
