/* USA LEVEL_07.REL:0x1B7600, 284-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 21 differing words; first difference at 0xC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float sqrtf(float x);
extern float D_0021D810[15];
extern int D_0021D8A0;
extern int D_0021D8A4;

extern void func_1082A8(void);
extern int func_12D068(unsigned int key);

void func_1B7600(void)
{
    float *p;
    float len2;
    float k;

    func_1082A8();
    for (p = D_0021D810; p < D_0021D810 + 15; p += 3) {
        len2 = p[0] * p[0] + p[1] * p[1] + p[2] * p[2];
        if (len2 >= 2.384185791015625e-07f) {
            k = 1.0f / sqrtf(len2);
            p[0] = p[0] * k;
            p[2] = p[2] * k;
            p[1] = p[1] * k;
        }
    }
    D_0021D8A0 = func_12D068(0xADF3F0ED);
    D_0021D8A4 = func_12D068(0x430ECAF0);
}
