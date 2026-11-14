/* USA LEVEL_01.REL:0x0D6F50 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_01_0C0B18.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern void func_0D6FF0(int a0, int a1, int a2, int a3, int t0, int t1);

void func_0D6F50(int a0, int a1, int a2, int a3)
{
    func_0D6FF0(a0, 0xEF, 0x87, a1, a2, a3);
}
