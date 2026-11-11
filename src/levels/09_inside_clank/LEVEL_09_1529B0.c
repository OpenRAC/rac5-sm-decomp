/* LEVEL_09:0x1529B0 -- placement copy of LEVEL_01_1603D8.c: caches the module found by hash on first use, clears the record's field, resets the object's byte and starts the handler. */
typedef struct Mod {
    char pad_00[0x24];
    unsigned int hash;
    char pad_28[0x1C];
} Mod;

typedef struct Mgr {
    char pad_00[0x34];
    Mod *mods;
    unsigned int nmods;
} Mgr;

typedef struct Rec {
    char pad_00[0x10];
    int field;
} Rec;

typedef struct Obj {
    char pad_00[0x45];
    char flag;
    char pad_46[0xE];
    Rec *rec;
} Obj;

extern Mgr *D_001F0890;
extern Mod *D_001F0FAC;
extern char D_0037CDA0[];
extern int func_1B3528(char *a0, Obj *a1);

static __inline__ Mod *FindMod(unsigned int hash)
{
    unsigned int i;

    for (i = 0; i < D_001F0890->nmods; i++) {
        if (D_001F0890->mods[i].hash == hash)
            return &D_001F0890->mods[i];
    }
    return 0;
}

int func_1529B0(Obj *object)
{
    Rec *rec = object->rec;

    if (D_001F0FAC == 0)
        D_001F0FAC = FindMod(0x804865E2);
    rec->field = 0;
    object->flag = 0;
    func_1B3528(D_0037CDA0, object);
    return 1;
}
