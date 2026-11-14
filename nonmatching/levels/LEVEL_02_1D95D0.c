/* USA LEVEL_02.REL:0x1D95D0, 160-byte candidate (14 November 2026).
 * Measured pinned: 23 differing words; first difference at 0x18.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
void func_1D95D0(char *a0, int a1, int a2)
{
    char *s;
    float w;
    float x;
    float y;
    float one;
    float *slot;
    float tmp[2];
    int n;

    s = *(char **)(a0 + 0x54) + ((a2 & 0xFF) << 4);
    one = 1.0f;
    x = *(float *)(s + 0x4);
    n = *(unsigned char *)(s + 0xC) + 1;
    *(unsigned char *)(s + 0xC) = n;
    slot = (float *)(s + 0x4);
    w = (float)(n & 0xFF) * x;
    y = (float)(n & 0xFF) * slot[1];
    tmp[0] = w;
    w = w + *(float *)(a1 + 0x30);
    tmp[0] = w;
    tmp[1] = y;
    tmp[1] = *(float *)(a1 + 0x38) + y;
    n = *(unsigned char *)(s + 0xC);
    one = one / (float)(n + 1);
    *(float *)(s + 0x4) = one * w;
    slot[1] = one * tmp[1];
}
