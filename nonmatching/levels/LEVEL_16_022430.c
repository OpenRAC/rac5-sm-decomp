/* USA LEVEL_16.REL:0x022430 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_16_0C10B0; and is defined
 * unlike the declaration in the accepted caller LEVEL_16_16D3C8.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef unsigned int u32;

extern int func_0224D0(void *first, void *second, u32 index, void *third);
extern char *func_0220C8(void *first, void *third);

int func_022430(void *first, void *second, void *third)
{
    u32 index;

    for (index = 0; index < 3; index++) {
        if (func_0224D0(first, second, index, third)) {
            char *record = func_0220C8(first, third);

            ((unsigned char *)record + index)[0x48] = 1;
            return 1;
        }
    }
    return 0;
}
