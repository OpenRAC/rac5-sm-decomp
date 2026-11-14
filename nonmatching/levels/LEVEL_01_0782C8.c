/* USA LEVEL_01.REL:0x0782C8, 100-byte candidate (14 November 2026).
 * Measured pinned: 14 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern unsigned int D_00297DC0[];

int func_0782C8(int a0, int a1, int first, int a3, int handle, char *rec, int second)
{
    unsigned int k = 0xC00030C5u;

    if (handle == 0) {
        return 0;
    }
    *(int *)rec = handle;
    *(unsigned int *)(rec + 0x1C) = (D_00297DC0[first] << 16) | k;
    if (second != 0) {
        *(unsigned int *)(rec + 0x20) = (D_00297DC0[second] << 16) | k;
    } else {
        *(int *)(rec + 0x20) = 0;
    }
    return 1;
}
