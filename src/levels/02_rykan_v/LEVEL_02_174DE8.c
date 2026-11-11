/* LEVEL_02:0x174DE8 -- placement copy of LEVEL_01_1603D8.c: caches the module found by hash on first use, clears the record's field, resets the object's byte and starts the handler. */
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

extern Mgr *D_0021BD50;
extern Mod *D_0021C634;
extern char D_003AD470[];
extern int func_1E2128(char *a0, Obj *a1);

static __inline__ Mod *FindMod(unsigned int hash)
{
    unsigned int i;

    for (i = 0; i < D_0021BD50->nmods; i++) {
        if (D_0021BD50->mods[i].hash == hash)
            return &D_0021BD50->mods[i];
    }
    return 0;
}

int func_174DE8(Obj *object)
{
    Rec *rec = object->rec;

    if (D_0021C634 == 0)
        D_0021C634 = FindMod(0x804865E2);
    rec->field = 0;
    object->flag = 0;
    func_1E2128(D_003AD470, object);
    return 1;
}
