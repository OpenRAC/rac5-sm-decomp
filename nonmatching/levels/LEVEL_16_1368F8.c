/* USA LEVEL_16.REL:0x1368F8 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_16_1361F8.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern int D_001BD700;
extern int D_002E2C20[];

void func_1368F8(int value)
{
    unsigned int i;

    for (i = 0; i < D_001BD700; i++) {
        if (D_002E2C20[i] == value) {
            break;
        }
    }
    if (i == D_001BD700) {
        D_002E2C20[i] = value;
        D_001BD700 = i + 1;
    }
}
