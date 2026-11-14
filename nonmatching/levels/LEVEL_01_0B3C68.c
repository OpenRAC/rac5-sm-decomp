/* USA LEVEL_01.REL:0x0B3C68 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_01_0008F8; and is defined
 * unlike the declaration in the accepted caller LEVEL_01_0B43A8.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern unsigned char *D_001F3FAC;

int func_0B3C68(int index)
{
    unsigned char *start = D_001F3FAC + 0x1960;
    unsigned char *cell = start - index;

    if (*cell == 0)
        return 0;
    *cell = 0;
    return 1;
}
