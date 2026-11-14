/* USA LEVEL_05.REL:0x16B728, 88-byte candidate (14 November 2026).
 * Measured pinned: 11 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern char D_00206D58[];
extern void func_16BD08(char *object, char *table, float *second);

void func_16B728(char *object, float *pos)
{
    float *first = *(float **)(object + 0x54);
    float *second;

    first[0] = pos[0];
    first[1] = pos[2];
    second = *(float **)(object + 0x58);
    second[6] = pos[1];
    func_16BD08(object, D_00206D58, second);
    *(int *)((char *)first + 0x20) = 0;
    *(int *)((char *)first + 0x1C) = 0;
}
