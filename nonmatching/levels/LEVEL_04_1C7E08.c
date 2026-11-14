/* USA LEVEL_04.REL:0x1C7E08 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_0F45C8 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern unsigned int D_0022265C;
extern int D_00222660;
extern unsigned int D_002B269C;
extern int func_0F45C8(unsigned int word);

void func_1C7E08(void)
{
    if (D_00222660 == 0) {
        D_0022265C = (D_0022265C & 0xF800FFFF) | (D_002B269C << 16);
        D_00222660 = func_0F45C8(D_0022265C);
    }
}
