/* USA LEVEL_04.REL:0x1DD510, 136-byte candidate (14 November 2026).
 * Measured gnu-ee-trial-divpad --flag=-mno-check-zero-division: 20 differing
 * words; first difference at 0x18.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float D_0023D160;

void func_1DD510(char *a0, float *a1, float *a2)
{
    char *v1;
    char *v2;
    char *o2;
    char *v3;
    float *a3;
    float f0;
    float f1;
    float f2;
    float f3;
    float f4;
    float f5;
    float f6;

    v1 = *(char **)(a0 + 0x58);
    v2 = *(char **)v1;
    o2 = *(char **)(v2 + 0x58);
    v3 = *(char **)o2;
    a3 = (float *)(v2 + 0x30);
    f0 = D_0023D160;
    f1 = f0 * 0.5f;
    f5 = a3[0];
    f6 = a2[0];
    f2 = *(float *)(v3 + 0x18);
    f3 = *(float *)(v3 + 0x1C);
    f0 = f2 / f0;
    f3 = f0 * f3;
    f4 = f0 * f0;
    f2 = f2 * f0;
    f6 = f6 * f3;
    f1 = f1 * f4;
    f5 = f5 + f6;
    f2 = f2 - f1;
    a1[0] = f5;
    f0 = a2[2] * f3;
    f1 = a3[2] + f0;
    a1[2] = f1;
    f0 = a3[1] + f2;
    a1[1] = f0;
}
