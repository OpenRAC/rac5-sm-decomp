/* USA LEVEL_01.REL:0x0C9038 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_1335E8 unlike its accepted definition; and declares func_135678 unlike
 * its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern void func_135678(void);
extern void func_133010(int value);
extern void func_1335E8(void);

void func_0C9038(void)
{
    func_135678();
    func_133010(0);
    func_1335E8();
}
