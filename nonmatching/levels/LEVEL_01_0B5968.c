/* USA LEVEL_01.REL:0x0B5968 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_01_0B59B8.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern int D_001FC6B0[];
extern int D_001FC6B8[];
extern int D_003285A0[];

void func_0B5968(int index)
{
    D_001FC6B0[index] = 0;
    D_001FC6B8[index] = 0;
    D_003285A0[index] = 0;
}
