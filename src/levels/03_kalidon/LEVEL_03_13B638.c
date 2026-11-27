/* LEVEL_03:0x13B638 -- placement copy of LEVEL_01_13D228.c: initialises the effect table: looks up the sound id built from a global, finds the tagged entry in the global table, sets up four slot handles and resets the scale of every live slot to 1. */
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

extern unsigned int D_002B2CD0;
extern int D_0021F78C;
extern Def *D_0021F790;
extern Reg *D_0021F410;
extern Slot *D_003AC640[4];
extern char D_002343A8[];
extern void func_102668(unsigned int id);
extern void func_128270(Slot **slots, char *tbl, int n);

static __inline__ Def *FindDef(Reg *r, unsigned int key)
{
    unsigned i;
    for (i = 0; i < r->count; i++) {
        if (r->defs[i].key == key)
            return &r->defs[i];
    }
    return 0;
}

void func_13B638(void)
{
    int i;
    Slot **p;
    int *snd;
    Def **def;

    snd = &D_0021F78C;
    *snd = ((int (*)(unsigned int id))func_102668)((D_002B2CD0 << 16) | 0xA00070D9);
    def = &D_0021F790;
    *def = FindDef(D_0021F410, 0x91C12CE2);
    func_128270(D_003AC640, D_002343A8, 4);
    p = D_003AC640;
    for (i = 3; i >= 0; i--, p++) {
        if (*p != 0)
            (*p)->scale_14 = 1.0f;
    }
}
