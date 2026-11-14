/* USA LEVEL_01.REL:0x0A08C8, 40-byte candidate (14 November 2026).
 * Measured pinned: 9 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int word;
    unsigned char flag;
} Block;

extern Block D_0029C8C0;

int func_0A08C8(int flag)
{
    D_0029C8C0.flag = flag;
    if (flag != 0)
        return 1;
}
