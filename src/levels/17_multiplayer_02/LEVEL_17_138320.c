/* LEVEL_17:0x138320 -- placement copy of LEVEL_16_13C910.c: rejects (returning -1) when the record's trigger check fires; otherwise looks up the shared entry of the wanted kind once, restarts the object's behaviour with a timer and registers it, and returns 1. */
typedef struct Entry {
    char pad00[0x24];
    int kind;
    char pad28[0x1C];
} Entry;

typedef struct Table {
    char pad00[0x34];
    Entry *entries;
    unsigned int count;
} Table;

typedef struct Rec {
    char pad00[0x10];
    int w10;
    unsigned char b14;
    unsigned char b15;
    unsigned char b16;
} Rec;

typedef struct Obj {
    char pad00[0x45];
    unsigned char b45;
    char pad46[0xE];
    Rec *rec;
} Obj;

extern Entry *D_001B0D4C;
extern Table *D_001A7EA0;
extern char D_002D5BB8[];

extern int func_112218(int a, int b, int c);
extern void func_156A68(Obj *o, float t);
extern void func_179350(char *dst, Obj *o);

static __inline__ Entry *FindEntry(Table *t, unsigned int kind)
{
    unsigned int i;

    for (i = 0; i < t->count; i++) {
        if (t->entries[i].kind == kind)
            return &t->entries[i];
    }
    return 0;
}

int func_138320(Obj *o)
{
    Rec *r = o->rec;

    if (func_112218(r->b14, r->b15, r->b16) != 0)
        return -1;
    if (D_001B0D4C == 0)
        D_001B0D4C = FindEntry(D_001A7EA0, 0x804865E2);
    func_156A68(o, 30.0f);
    r->w10 = 0;
    o->b45 = 0;
    func_179350(D_002D5BB8, o);
    return 1;
}
