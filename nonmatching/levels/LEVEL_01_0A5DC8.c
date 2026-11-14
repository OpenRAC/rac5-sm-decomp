/* USA LEVEL_01.REL:0x0A5DC8 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_01_0A5EF8.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
void func_0A5DC8(char *o, int v)
{
    *(unsigned char *)(o + 0x15) = v;
}
