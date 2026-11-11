/* LEVEL_06:0x150AE8 -- placement copy of LEVEL_01_1603D8.c: caches the module found by hash on first use, clears the record's field, resets the object's byte and starts the handler. */
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

extern Mgr *D_001F5990;
extern Mod *D_001F60B4;
extern char D_003823B0[];
extern int func_1B9470(char *a0, Obj *a1);

static __inline__ Mod *FindMod(unsigned int hash)
{
    unsigned int i;

    for (i = 0; i < D_001F5990->nmods; i++) {
        if (D_001F5990->mods[i].hash == hash)
            return &D_001F5990->mods[i];
    }
    return 0;
}

int func_150AE8(Obj *object)
{
    Rec *rec = object->rec;

    if (D_001F60B4 == 0)
        D_001F60B4 = FindMod(0x804865E2);
    rec->field = 0;
    object->flag = 0;
    func_1B9470(D_003823B0, object);
    return 1;
}
