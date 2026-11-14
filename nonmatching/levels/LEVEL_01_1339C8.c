/* USA LEVEL_01.REL:0x1339C8 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_01_133D10.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern int D_00207068;

int func_1339C8(void *p)
{
    if (D_00207068 == (int)p) {
        D_00207068 = 0;
        return 1;
    }
    return 0;
}
