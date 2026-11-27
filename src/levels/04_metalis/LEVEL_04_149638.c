/* LEVEL_04:0x149638 -- placement copy of LEVEL_01_13D228.c: initialises the effect table: looks up the sound id built from a global, finds the tagged entry in the global table, sets up four slot handles and resets the scale of every live slot to 1. */
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

extern unsigned int D_002B2650;
extern int D_0022052C;
extern Def *D_00220530;
extern Reg *D_002201B0;
extern Slot *D_003ABFC0[4];
extern char D_00234E38[];
extern void func_10E870(unsigned int id);
extern void func_136488(Slot **slots, char *tbl, int n);

static __inline__ Def *FindDef(Reg *r, unsigned int key)
{
    unsigned i;
    for (i = 0; i < r->count; i++) {
        if (r->defs[i].key == key)
            return &r->defs[i];
    }
    return 0;
}

void func_149638(void)
{
    int i;
    Slot **p;
    int *snd;
    Def **def;

    snd = &D_0022052C;
    *snd = ((int (*)(unsigned int id))func_10E870)((D_002B2650 << 16) | 0xA00070D9);
    def = &D_00220530;
    *def = FindDef(D_002201B0, 0x91C12CE2);
    func_136488(D_003ABFC0, D_00234E38, 4);
    p = D_003ABFC0;
    for (i = 3; i >= 0; i--, p++) {
        if (*p != 0)
            (*p)->scale_14 = 1.0f;
    }
}
