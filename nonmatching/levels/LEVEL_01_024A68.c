/* USA LEVEL_01.REL:0x024A68 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_01_0D19B8.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef unsigned int u32;

extern int func_024B08(int first, int second, u32 index, int third);
extern int func_024628(int x, int y);

int func_024A68(int first, int second, int third)
{
    u32 index;

    for (index = 0; index < 3; index++) {
        if (func_024B08(first, second, index, third)) {
            *(char *)(func_024628(first, third) + index + 0x4C) = 1;
            return 1;
        }
    }
    return 0;
}
