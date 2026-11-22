/* USA LEVEL_17.REL:0x14EDD0 (21 November 2026): exact linked bytes under
 * pinned, held.
 * Its form stays out of the accepted set because a placement declares
 * func_0D40E0 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
typedef struct {
    char pad_00[0x0C];
    int base_0C;
    char pad_10[0x14];
    unsigned int key_24;
    char pad_28[0x1C];
} Record;

typedef struct {
    char pad_00[0x34];
    Record *records_34;
    unsigned int count_38;
} Table;

typedef struct {
    char pad_00[0x144];
    unsigned int w144;
} Shared;

extern Table *D_001A7EA0;
extern int D_001B11A4;
extern int D_001B11A8;
extern int D_001B11AC;
extern int D_001B11B0;
extern int D_002D63BC;
extern Shared D_0023F540;

extern int func_0D40E0(unsigned int value);
extern void func_0D99D0(int a);
extern int func_106410(unsigned int value);

static __inline__ Record *Find(Table *t, unsigned int key)
{
    unsigned int i;

    for (i = 0; i < t->count_38; i++) {
        if (t->records_34[i].key_24 == key) {
            return &t->records_34[i];
        }
    }
    return 0;
}

void func_14EDD0(void)
{
    Record *rec;

    rec = Find(D_001A7EA0, 0x9F6FE64BU);
    if (rec != 0) {
        D_001B11A4 = rec->base_0C;
        D_001B11A8 = D_001B11A4 + *(int *)((char *)rec + 0x30) * 0x80;
    }
    D_002D63BC = func_0D40E0((D_0023F540.w144 << 16) | 0x80007041U);
    func_0D99D0(0);
    D_001B11AC = func_106410(0x8A78A639U);
    D_001B11B0 = func_106410(0xA3660141U);
}
