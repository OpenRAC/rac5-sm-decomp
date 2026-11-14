/* USA LEVEL_01.REL:0x18C9C8 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_10B8A8 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    char pad00[0x2C];
    unsigned int f2C;
    char pad30[0x3C];
    unsigned int f6C;
    unsigned int f70;
} Cfg;

extern Cfg D_00297DC0;
extern int D_0021A7F0;
extern int D_002085D4[1];
extern int D_002085D8;
extern int D_002085DC;
extern int D_002085E0;
extern int D_002085E4;
extern int func_109DB8(unsigned int value);
extern int func_10B8A8(unsigned int value);
extern int func_12A068(unsigned int value);
extern int func_12B1C8(unsigned int kind, int count);

void func_18C9C8(void)
{
    D_002085D4[0] = func_12B1C8(0xD111E6F1u, 8);
    D_002085D8 = func_109DB8((D_00297DC0.f6C << 16) | 0xA00010C1u);
    D_002085DC = func_109DB8((D_00297DC0.f2C << 16) | 0xA00010C1u);
    D_002085E0 = func_10B8A8((D_00297DC0.f70 << 16) | 0xA00010C1u);
    D_002085E4 = func_12A068(D_0021A7F0 == 1 ? 0x6491CCF9u : 0xE9BC7179u);
}
