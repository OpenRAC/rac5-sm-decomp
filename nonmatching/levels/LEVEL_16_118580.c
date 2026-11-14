/* USA LEVEL_16.REL:0x118580 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement is defined unlike
 * the declaration in the accepted caller LEVEL_16_164108.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    unsigned int key;
    int w4;
    int w8;
    int wC;
    int w10;
} Rec;

extern int D_002E00C0;
extern Rec D_002DFEE0[];

void func_118580(unsigned int key)
{
    unsigned int i;

    for (i = 0; i < D_002E00C0; i++) {
        if (D_002DFEE0[i].key == key) {
            D_002E00C0 = D_002E00C0 - 1;
            D_002DFEE0[i] = D_002DFEE0[D_002E00C0];
            return;
        }
    }
}
