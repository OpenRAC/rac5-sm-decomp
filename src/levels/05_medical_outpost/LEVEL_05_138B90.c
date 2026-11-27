/* LEVEL_05:0x138B90 -- placement copy of LEVEL_01_13D228.c: initialises the effect table: looks up the sound id built from a global, finds the tagged entry in the global table, sets up four slot handles and resets the scale of every live slot to 1. */
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

extern unsigned int D_00283D10;
extern int D_001F618C;
extern Def *D_001F6190;
extern Reg *D_001F5E10;
extern Slot *D_0037D680[4];
extern char D_0020A288[];
extern void func_1014B0(unsigned int id);
extern void func_125980(Slot **slots, char *tbl, int n);

static __inline__ Def *FindDef(Reg *r, unsigned int key)
{
    unsigned i;
    for (i = 0; i < r->count; i++) {
        if (r->defs[i].key == key)
            return &r->defs[i];
    }
    return 0;
}

void func_138B90(void)
{
    int i;
    Slot **p;
    int *snd;
    Def **def;

    snd = &D_001F618C;
    *snd = ((int (*)(unsigned int id))func_1014B0)((D_00283D10 << 16) | 0xA00070D9);
    def = &D_001F6190;
    *def = FindDef(D_001F5E10, 0x91C12CE2);
    func_125980(D_0037D680, D_0020A288, 4);
    p = D_0037D680;
    for (i = 3; i >= 0; i--, p++) {
        if (*p != 0)
            (*p)->scale_14 = 1.0f;
    }
}
