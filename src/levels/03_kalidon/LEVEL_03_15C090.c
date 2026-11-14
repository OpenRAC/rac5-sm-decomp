/* LEVEL_03:0x15C090 -- when the global entry pointer is still unset, looks up the table entry with a fixed hashed id and stores it there; then clears a field of the object's record and its state byte, runs the follow-up with the linked pointer and returns 1. */
typedef struct {
    char pad00[0x24];
    unsigned int id;
    char pad28[0x1C];
} Ent;

typedef struct {
    char pad00[0x34];
    Ent *ents;
    unsigned int count;
} Table;

typedef struct {
    char pad00[0x10];
    int f10;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0xE];
    Rec *rec;
    void *link;
} Obj;

extern Ent *D_0021FB74;
extern Table *D_0021F410;
extern void func_1DB060(Obj *o, void *link);

int func_15C090(Obj *o)
{
    Rec *rec = o->rec;
    Ent *r;
    unsigned int i;
    unsigned int key;

    if (D_0021FB74 == 0) {
        key = 0x804865E2u;
        for (i = 0; i < D_0021F410->count; i++) {
            if (D_0021F410->ents[i].id == key) {
                r = &D_0021F410->ents[i];
                goto done;
            }
        }
        r = 0;
done:
        D_0021FB74 = r;
    }
    rec->f10 = 0;
    o->state = 0;
    func_1DB060(o, o->link);
    return 1;
}
