/* LEVEL_02:0x1435A0 -- placement copy of LEVEL_01_13D228.c: initialises the effect table: looks up the sound id built from a global, finds the tagged entry in the global table, sets up four slot handles and resets the scale of every live slot to 1. */
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

extern unsigned int D_002AF350;
extern int D_0021C0CC;
extern Def *D_0021C0D0;
extern Reg *D_0021BD50;
extern Slot *D_003A8CC0[4];
extern char D_00230488[];
extern void func_109F80(unsigned int id);
extern void func_1303B8(Slot **slots, char *tbl, int n);

static __inline__ Def *FindDef(Reg *r, unsigned int key)
{
    unsigned i;
    for (i = 0; i < r->count; i++) {
        if (r->defs[i].key == key)
            return &r->defs[i];
    }
    return 0;
}

void func_1435A0(void)
{
    int i;
    Slot **p;
    int *snd;
    Def **def;

    snd = &D_0021C0CC;
    *snd = ((int (*)(unsigned int id))func_109F80)((D_002AF350 << 16) | 0xA00070D9);
    def = &D_0021C0D0;
    *def = FindDef(D_0021BD50, 0x91C12CE2);
    func_1303B8(D_003A8CC0, D_00230488, 4);
    p = D_003A8CC0;
    for (i = 3; i >= 0; i--, p++) {
        if (*p != 0)
            (*p)->scale_14 = 1.0f;
    }
}
