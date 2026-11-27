/* LEVEL_08:0x14E6D0 -- placement copy of LEVEL_01_13D228.c: initialises the effect table: looks up the sound id built from a global, finds the tagged entry in the global table, sets up four slot handles and resets the scale of every live slot to 1. */
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

extern unsigned int D_002E70D0;
extern int D_0024FFCC;
extern Def *D_0024FFD0;
extern Reg *D_0024FC50;
extern Slot *D_003E0A40[4];
extern char D_002652A8[];
extern void func_112D80(unsigned int id);
extern void func_13B540(Slot **slots, char *tbl, int n);

static __inline__ Def *FindDef(Reg *r, unsigned int key)
{
    unsigned i;
    for (i = 0; i < r->count; i++) {
        if (r->defs[i].key == key)
            return &r->defs[i];
    }
    return 0;
}

void func_14E6D0(void)
{
    int i;
    Slot **p;
    int *snd;
    Def **def;

    snd = &D_0024FFCC;
    *snd = ((int (*)(unsigned int id))func_112D80)((D_002E70D0 << 16) | 0xA00070D9);
    def = &D_0024FFD0;
    *def = FindDef(D_0024FC50, 0x91C12CE2);
    func_13B540(D_003E0A40, D_002652A8, 4);
    p = D_003E0A40;
    for (i = 3; i >= 0; i--, p++) {
        if (*p != 0)
            (*p)->scale_14 = 1.0f;
    }
}
