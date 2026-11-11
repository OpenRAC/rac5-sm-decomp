/* LEVEL_08:0x169C30 -- initialises the object's state record, runs the setup helper and caches a few table-derived fields. */
typedef struct Entry {
    char pad_00[0x20];
    int key;
    char pad_24[0x10];
} Entry;

typedef struct Tab {
    char pad_00[4];
    Entry *entries;
} Tab;

typedef struct Obj Obj;

typedef struct Sub {
    int w00;
    char pad_04[10];
    unsigned char b0E;
    char pad_0F;
    Obj *owner;
    int w14;
} Sub;

typedef struct Rec {
    int w00;
    Sub sub;
    int w1C;
} Rec;

struct Obj {
    char pad_00[0x40];
    Tab *table;
    unsigned char index;
    char pad_45;
    unsigned char hit;
    char pad_47[0x11];
    Rec *rec;
    char pad_5C[8];
    unsigned int flags;
    char pad_68[8];
    float scale;
    char pad_74[3];
    unsigned char mode;
};

extern float D_00275088;
extern Tab *D_00250614;
extern void func_084AC8(Obj *o, float t, unsigned idx);

int func_169C30(Obj *o)
{
    Rec *rec = o->rec;
    Sub *sub = &rec->sub;

    sub->b0E = 2;
    sub->owner = o;
    sub->w14 = 0;
    sub->w00 = 0;
    rec->w00 = 0;
    o->mode = 0x50;
    func_084AC8(o, 0.0f, 0);
    rec->w1C = 0;
    o->flags |= 0x10000400;
    o->hit = o->table->entries[o->index].key == 0x1585F42C;
    o->scale = D_00275088;
    D_00250614 = o->table;
    return 1;
}
