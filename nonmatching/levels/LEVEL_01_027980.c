/* USA LEVEL_01.REL:0x027980, 88-byte candidate (14 November 2026).
 * Measured pinned: 10 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern char *D_001F3FAC;

int func_027980(int key, int unused, int flag)
{
    unsigned int i;
    unsigned int off;
    char *p;

    for (i = 0, off = 0; i < 8; i++, off += 4) {
        p = D_001F3FAC + off;
        if (*(int *)(p + 0x864) == key) {
            if (flag != 0)
                *(int *)(p + 0x884) = key;
            else
                *(int *)(p + 0x884) = 0;
            *(int *)(D_001F3FAC + off + 0x864) = 0;
            return 1;
        }
    }
    return 0;
}
