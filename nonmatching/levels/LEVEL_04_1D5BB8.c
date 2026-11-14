/* USA LEVEL_04.REL:0x1D5BB8, 128-byte candidate (14 November 2026).
 * Measured pinned: 8 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern int func_1710C0(char *record, void *other);

int func_1D5BB8(char *a0, void *a1)
{
    char *obj;
    char **p;
    int i;

    i = 0;
    obj = *(char **)(a0 + 0x58);
    a0 = *(char **)(a0 + 0x54);
    if (*(unsigned char *)(obj + 0x48) == 0) {
        return 0;
    }
    p = (char **)(a0 + 0x40);
    do {
        if (func_1710C0(*p, a1) != 0) {
            return 1;
        }
        i++;
        p++;
    } while ((unsigned int)i < *(unsigned char *)(obj + 0x48));
    return 0;
}
