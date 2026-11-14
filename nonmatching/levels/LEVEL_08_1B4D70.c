/* USA LEVEL_08.REL:0x1B4D70 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_231638 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern unsigned int D_002E70F8;
extern int D_00251D84;
extern int func_231638(unsigned int a0);

void func_1B4D70(void)
{
    D_00251D84 = func_231638((D_002E70F8 << 16) | 0x700010c1u);
}
