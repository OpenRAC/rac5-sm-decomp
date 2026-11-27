/* LEVEL_07:0x140260 -- placement copy of LEVEL_01_13D228.c: initialises the effect table: looks up the sound id built from a global, finds the tagged entry in the global table, sets up four slot handles and resets the scale of every live slot to 1. */
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

extern unsigned int D_002AD750;
extern int D_0021B40C;
extern Def *D_0021B410;
extern Reg *D_0021B090;
extern Slot *D_003A70C0[4];
extern char D_002301A8[];
extern void func_105380(unsigned int id);
extern void func_12D008(Slot **slots, char *tbl, int n);

static __inline__ Def *FindDef(Reg *r, unsigned int key)
{
    unsigned i;
    for (i = 0; i < r->count; i++) {
        if (r->defs[i].key == key)
            return &r->defs[i];
    }
    return 0;
}

void func_140260(void)
{
    int i;
    Slot **p;
    int *snd;
    Def **def;

    snd = &D_0021B40C;
    *snd = ((int (*)(unsigned int id))func_105380)((D_002AD750 << 16) | 0xA00070D9);
    def = &D_0021B410;
    *def = FindDef(D_0021B090, 0x91C12CE2);
    func_12D008(D_003A70C0, D_002301A8, 4);
    p = D_003A70C0;
    for (i = 3; i >= 0; i--, p++) {
        if (*p != 0)
            (*p)->scale_14 = 1.0f;
    }
}
