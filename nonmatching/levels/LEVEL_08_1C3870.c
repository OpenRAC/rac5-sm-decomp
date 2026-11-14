/* USA LEVEL_08.REL:0x1C3870 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_22D308 unlike its accepted definition; and declares func_22D368 unlike
 * its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct Blk {
    char pad_00[0x128];
    unsigned int w128;
} Blk;

extern Blk D_002E7040;
extern int D_00251E9C;
extern int D_00251EA0;
extern int D_00251EA4;
extern int func_22D308(unsigned int value);
extern int func_22D368(unsigned int value);
extern int func_13B5A0(unsigned int value);

void func_1C3870(void)
{
    Blk *s0;

    s0 = &D_002E7040;
    D_00251E9C = func_22D308((s0->w128 << 16) | 0x5800B0C1u);
    D_00251EA0 = func_22D368((s0->w128 << 16) | 0x580030C1u);
    D_00251EA4 = func_13B5A0(0x18454B8Bu);
}
