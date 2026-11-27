/* LEVEL_19:0x153EF8 -- releases the object's state: frees its table slot by id, then clears the slot it owns in the parent's list, dropping the parent's live count when the slot was live, and finishes the object. */
typedef struct {
    unsigned short id;
    char pad_02[1];
    unsigned char index;
    char pad_04[0x50 - 0x04];
    unsigned char slot;
} State;

typedef struct { char pad_00[0x68]; } Entry;
typedef struct { char pad_000[0x408]; unsigned char live; } Table;
typedef struct { char pad_00[0x18]; unsigned char flags; char pad_19[0x1C - 0x19]; } Slot;
typedef struct { char pad_00[0x58]; Table *table; } Parent;
typedef struct { char pad_00[0x30]; Parent *parent; } Link;
typedef struct { char pad_00[0x54]; Link *link; State *state; } Obj;

extern Entry D_001DE578[];
extern void *memset(void *p, int c, unsigned int n);
extern void func_0868F0(Entry *e, unsigned int id);
extern void func_017448(Obj *o);

static __inline__ void Release(Entry *pool, unsigned short *h)
{
    if (*h != 0xFFFF) {
        func_0868F0(pool, *h);
        *h = 0xFFFF;
    }
}

void func_153EF8(Obj *o)
{
    Link *link = o->link;
    State *s = o->state;
    Table *t;
    Slot *slot;

    Release(&D_001DE578[s->index], &s->id);
    t = link->parent->table;
    slot = (Slot *)t + s->slot;
    if (slot->flags & 1) {
        t->live--;
    }
    memset(slot, 0, 0x1C);
    func_017448(o);
}
