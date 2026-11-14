/* USA LEVEL_04.REL:0x198DD0 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_035438 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern int D_00221E18;
extern int func_1364E8(unsigned int value);
extern void func_035438(void *p);
extern void func_0F6C80(int index);

void func_198DD0(void *p)
{
    D_00221E18 = func_1364E8(0xA0B10063u);
    func_035438(p);
    func_0F6C80(0x1E);
}
