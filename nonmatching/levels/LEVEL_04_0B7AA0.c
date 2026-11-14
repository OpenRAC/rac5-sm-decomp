/* USA LEVEL_04.REL:0x0B7AA0 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_04_0B7AC8.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern int D_00342188[];

int func_0B7AA0(int index)
{
    return D_00342188[index * 5] != 0;
}
