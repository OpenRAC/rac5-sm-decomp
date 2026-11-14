/* USA LEVEL_16.REL:0x0003A0 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_16_0ACA48; and is defined
 * unlike the declaration in the accepted caller LEVEL_16_0ADCE0.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
extern unsigned char *D_001A1AB4;
extern unsigned int func_000318(int index, unsigned int bit);

int func_0003A0(int value, unsigned int sel)
{
    if (func_000318(value, sel) != 0) {
        if (sel - 2 < 2) {
            D_001A1AB4[0x856] = value;
            D_001A1AB4[0x857] = value;
        } else if (sel - 4 < 2) {
            D_001A1AB4[0x858] = value;
            D_001A1AB4[0x859] = value;
        } else {
            (D_001A1AB4 + sel)[0x854] = value;
        }
        return 1;
    }
    return 0;
}
