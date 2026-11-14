/* USA LEVEL_07.REL:0x1A14F8 (14 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_105380 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct Rec {
    char pad_00[0x18];
    float a;
    float b;
} Rec;

typedef struct Holder {
    Rec *first;
} Holder;

typedef struct Holder2 {
    Rec *second;
} Holder2;

extern unsigned int D_002AD750;
extern int D_0021D0BC;
extern Holder D_0021D0F8;
extern Holder2 D_0021D0FC;
extern int func_105380(unsigned int value);
extern int func_12D068(unsigned int value);

void func_1A14F8(void)
{
    int *slot = &D_0021D0BC;

    *slot = func_105380((D_002AD750 << 16) | 0xA00070D9u);
    D_0021D0F8.first = (Rec *)func_12D068(0x4EC03E70u);
    if (D_0021D0F8.first != 0) {
        D_0021D0F8.first->b = 100000.0f;
        D_0021D0F8.first->a = 100000.0f;
    }
    D_0021D0FC.second = (Rec *)func_12D068(0x9075D047u);
    if (D_0021D0FC.second != 0) {
        D_0021D0FC.second->b = 100000.0f;
        D_0021D0FC.second->a = 100000.0f;
    }
}
