/* USA LEVEL_02.REL:0x17B088, 140-byte candidate (14 November 2026).
 * Measured pinned: 27 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern void func_01CB90(float scale, float *point, int a, int b, int c, int d, int e);

void func_17B088(char *o)
{
    float p[3];
    float *vel = (float *)(o + 0x10);
    float *pos = (float *)(o + 0x30);

    p[0] = pos[0] + vel[0] * -0.20000000298023224f;
    p[1] = pos[1] + vel[1] * -0.20000000298023224f;
    p[2] = pos[2] + vel[2] * -0.20000000298023224f;
    func_01CB90(0.20000000298023224f, p, 0x129, 0x101, 4, 1, 0);
}
