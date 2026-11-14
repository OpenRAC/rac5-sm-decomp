/* USA LEVEL_16.REL:0x137FB8, 192-byte candidate (14 November 2026).
 * Measured pinned: 6 differing words; first difference at 0xC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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
extern void func_086440(Entry *e, int id);
extern void func_017748(Obj *o);

void func_137FB8(Obj *o)
{
    Link *link = o->link;
    State *s = o->state;
    Entry *e;
    Table *t;
    Slot *slot;

    e = &D_001DE3F8[s->index];
    if (s->id != 0xFFFF) {
        func_086440(e, s->id);
        s->id = 0xFFFF;
    }
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
