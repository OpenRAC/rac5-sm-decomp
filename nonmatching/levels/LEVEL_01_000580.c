/* USA LEVEL_01.REL:0x000580 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_01_0BD5B8; and is defined
 * unlike the declaration in the accepted caller LEVEL_01_0BE850.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct Block {
    char pad000[0x854];
    unsigned char b[10];
} Block;

extern Block *D_001F3FAC;

extern unsigned int func_0004F8(int index, unsigned int bit);
extern void func_19DB08(void *a, void *b);

int func_000580(int value, unsigned int slot, void *a, void *b)
{
    if (func_0004F8(value, slot) != 0) {
        if (slot - 2 < 2) {
            D_001F3FAC->b[2] = value;
            D_001F3FAC->b[3] = value;
        } else if (slot - 4 < 2) {
            D_001F3FAC->b[4] = value;
            D_001F3FAC->b[5] = value;
        } else {
            D_001F3FAC->b[slot] = value;
        }
        func_19DB08(a, b);
        return 1;
    }
    return 0;
}
