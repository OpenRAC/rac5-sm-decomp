/* USA LEVEL_01.REL:0x04DC60, 92-byte candidate (14 November 2026).
 * Measured pinned: 6 differing words; first difference at 0x3C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern float fabsf(float x);

static __inline__ int NearZero(float v)
{
    return fabsf(v) <= 0.1f;
}

int func_04DC60(char *a0)
{
    int a1;

    a1 = *(int *)(a0 + 0x334);
    if (a1 == 0) {
        return 0;
    }
    if ((unsigned char)NearZero(*(float *)(a0 + 0x340)) == 0) {
        return 0;
    }
    if (*(int *)(a0 + 0x168) == 0) {
        return a1;
    }
    return 0;
}
