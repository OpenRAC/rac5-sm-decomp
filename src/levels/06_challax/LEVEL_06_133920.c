/* LEVEL_06:0x133920 -- placement copy of LEVEL_01_13D228.c: initialises the effect table: looks up the sound id built from a global, finds the tagged entry in the global table, sets up four slot handles and resets the scale of every live slot to 1. */
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

extern unsigned int D_00284BD0;
extern int D_001F5D0C;
extern Def *D_001F5D10;
extern Reg *D_001F5990;
extern Slot *D_0037E540[4];
extern char D_0020A228[];
extern void func_0FCE90(unsigned int id);
extern void func_120660(Slot **slots, char *tbl, int n);

static __inline__ Def *FindDef(Reg *r, unsigned int key)
{
    unsigned i;
    for (i = 0; i < r->count; i++) {
        if (r->defs[i].key == key)
            return &r->defs[i];
    }
    return 0;
}

void func_133920(void)
{
    int i;
    Slot **p;
    int *snd;
    Def **def;

    snd = &D_001F5D0C;
    *snd = ((int (*)(unsigned int id))func_0FCE90)((D_00284BD0 << 16) | 0xA00070D9);
    def = &D_001F5D10;
    *def = FindDef(D_001F5990, 0x91C12CE2);
    func_120660(D_0037E540, D_0020A228, 4);
    p = D_0037E540;
    for (i = 3; i >= 0; i--, p++) {
        if (*p != 0)
            (*p)->scale_14 = 1.0f;
    }
}
