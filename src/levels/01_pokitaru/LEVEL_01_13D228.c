/* LEVEL_01:0x13D228 -- initialises the effect table: looks up the sound id built from a global, finds the tagged entry in the global table, sets up four slot handles and resets the scale of every live slot to 1. */
typedef struct Def {
    char pad[0x24];
    unsigned int key;
    char pad1[0x44 - 0x28];
} Def;

typedef struct Reg {
    char pad0[0x34];
    Def *defs;
    unsigned int count;
} Reg;

typedef struct Slot {
    char pad_00[0x14];
    float scale_14;
} Slot;

extern unsigned int D_00297E50;
extern int D_0020710C;
extern Def *D_00207110;
extern Reg *D_00206D90;
extern Slot *D_003917C0[4];
extern char D_0021B438[];
extern void func_103DD0(unsigned int id);
extern void func_12A008(Slot **slots, char *tbl, int n);

static __inline__ Def *FindDef(Reg *r, unsigned int key)
{
    unsigned i;
    for (i = 0; i < r->count; i++) {
        if (r->defs[i].key == key)
            return &r->defs[i];
    }
    return 0;
}

void func_13D228(void)
{
    int i;
    Slot **p;
    int *snd;
    Def **def;

    snd = &D_0020710C;
    *snd = ((int (*)(unsigned int id))func_103DD0)((D_00297E50 << 16) | 0xA00070D9);
    def = &D_00207110;
    *def = FindDef(D_00206D90, 0x91C12CE2);
    func_12A008(D_003917C0, D_0021B438, 4);
    p = D_003917C0;
    for (i = 3; i >= 0; i--, p++) {
        if (*p != 0)
            (*p)->scale_14 = 1.0f;
    }
}
