/* USA LEVEL_17.REL:0x15BD28 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_0E8CB8 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern unsigned int D_0023F540[];
extern int D_002D6914;
extern int D_002D6910;
extern int D_001B1568;
extern int D_001B156C;
extern int D_001B1570;
extern int D_001B1574;

extern int func_0E8CB8(unsigned int value);
extern int func_0D1AE0(unsigned int value);
extern int func_106410(unsigned int value);

void func_15BD28(void)
{
    D_002D6914 = func_0E8CB8((D_0023F540[0xB0 / 4] << 16) | 0x80007041U);
    D_002D6910 = func_0D1AE0((D_0023F540[2] << 16) | 0x80007041U);
    D_001B1568 = func_106410(0xF78F92A4U);
    D_001B156C = func_106410(0x223E6EBEU);
    D_001B1570 = func_106410(0x8FB84EB2U);
    D_001B1574 = func_106410(0xFF1208D1U);
}
