/* USA LEVEL_16.REL:0x142E68 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_144770 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern unsigned int D_0024E240[];
extern int D_001BD8EC;
extern int D_001BD8F0;
extern int func_0ED9E8(unsigned int id);
extern int func_144770(unsigned int id);

void func_142E68(void)
{
    D_001BD8EC = func_0ED9E8((D_0024E240[0xB0 / 4] << 16) | 0x580034C1U);
    D_001BD8F0 = func_144770((D_0024E240[0xB0 / 4] << 16) | 0x580030C1U);
}
