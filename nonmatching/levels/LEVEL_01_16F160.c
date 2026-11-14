/* USA LEVEL_01.REL:0x16F160, 100-byte candidate (14 November 2026).
 * Measured pinned: 14 differing words; first difference at 0x18.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
void func_16F160(char *object)
{
    int *e;
    unsigned int i;

    *(float *)(object + 0x70) = 255.0f;
    *(unsigned char *)(object + 0x45) = 1;
    e = *(int **)(object + 0x58);
    for (i = 0; i < 12; i++) {
        if (e[0] != 0) {
            *(int *)(e[0] + 0x64) &= ~0x20;
            *(int *)(e[0] + 0x64) &= ~0x40;
        }
        e = (int *)((char *)e + 0x1C);
    }
}
