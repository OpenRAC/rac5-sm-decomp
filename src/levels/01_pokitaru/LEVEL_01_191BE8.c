/* LEVEL_01:0x191BE8 -- counts the entries of the record that are not in a given state and not yet marked, and triggers the follow-up once every entry is marked. */
typedef struct {
    char pad00[0x64];
    unsigned int flags;
} Entry;

typedef struct {
    Entry *ents[8];
    unsigned char mask;
    unsigned char count;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char hits;
    char pad46[0xE];
    Rec *rec;
} Obj;

extern void func_07C670(void *object, int flag);

void func_191BE8(Obj *o)
{
    Rec *rec = o->rec;
    unsigned char i;
    int bit;

    for (i = 0; i < rec->count; i++) {
        if ((rec->ents[i]->flags & 7) != 1) {
            bit = 1 << i;
            if ((rec->mask & bit) == 0) {
                o->hits = o->hits + 1;
                rec->mask = rec->mask | bit;
            }
        }
    }
    if (rec->mask == (unsigned char)((1 << rec->count) - 1)) {
        func_07C670(o, 1);
    }
}
