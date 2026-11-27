/* LEVEL_16:0x137FB8 -- releases the object's state: frees its table slot by id, then clears the slot it owns in the parent's list, dropping the parent's live count when the slot was live, and finishes the object. */
typedef struct {
    char pad_00[0x10];
    unsigned short id;
    char pad_12[1];
    unsigned char index;
    char pad_14[0x70 - 0x14];
    unsigned char slot;
} State;

typedef struct { char pad_00[0x68]; } Entry;
typedef struct { char pad_000[0x408]; unsigned char live; } Table;
typedef struct { char pad_00[0x18]; unsigned char flags; char pad_19[0x1C - 0x19]; } Slot;
typedef struct { char pad_00[0x58]; Table *table; } Parent;
typedef struct { char pad_00[0x30]; Parent *parent; } Link;
typedef struct { char pad_00[0x54]; Link *link; State *state; } Obj;

extern Entry D_001DE3F8[];
extern void *memset(void *p, int c, unsigned n);
extern void func_086440(Entry *e, unsigned int id);

static __inline__ void Release(Entry *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_086440(pool, *h);
        *h = 0xFFFF;
    }
}
extern void func_017748(Obj *o);

void func_137FB8(Obj *o)
{
    Link *link = o->link;
    State *s = o->state;
    Table *t;
    Slot *slot;

    Release(&D_001DE3F8[s->index], &s->id);
    if (link->parent != 0) {
        t = link->parent->table;
        slot = (Slot *)t + s->slot;
        if (slot->flags & 1) {
            t->live--;
        }
        memset(slot, 0, 0x1C);
    }
    func_017748(o);
}
