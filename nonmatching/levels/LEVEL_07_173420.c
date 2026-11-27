/* USA LEVEL_07:173420, 220-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 228 bytes: 46 differing words; first difference +0x1C. No matching credit.
 * Remaining issue: semantics corrected from retail: the search stops at the FIRST entry of the
 * wanted kind and only then applies the state/flag predicate (an unsigned char inline, andi 0xFF
 * as retail); the earlier draft kept searching. Retail recounts the twelve slots with a guard-
 * free pointer loop at an unrotated loop head and reloads the slot base (byte offset t2) every
 * pass; ours rotates the outer loop (test at the bottom, 228 vs 220 B). for(;;)/while heads,
 * index/pointer/do-while count loops tried
 * Reopen with new caller/type evidence or a source hypothesis that resolves the recorded
 * difference without changing accepted callers.
 */

/* LEVEL_07:0x173420 -- finds the first entry of the wanted kind in the owner's twelve-slot table; when it is not in one of two states and its flag byte is clear, stores it in the object and returns 7, otherwise (or when the record is disabled) returns 8. */
typedef struct Model {
    char pad00[0x24];
    int kind;
} Model;

typedef struct Detail {
    char pad00[0xAB];
    unsigned char bAB;
} Detail;

typedef struct Entry {
    char pad00[0x40];
    Model *model;
    char pad44[1];
    unsigned char state;
    char pad46[0x12];
    Detail *detail;
} Entry;

typedef struct Slot {
    Entry *entry;
    char pad04[0x18];
} Slot;

typedef struct Owner {
    char pad00[0x58];
    Slot *slots;
} Owner;

typedef struct Rec {
    char pad00[0x2C];
    Owner *owner;
    char pad30[0x10];
    unsigned char enabled;
} Rec;

typedef struct Obj {
    char pad00[0x54];
    Rec *rec;
    struct Dst *dst;
} Obj;

typedef struct Dst {
    char pad00[0x30];
    Entry *entry;
} Dst;

static __inline__ unsigned int Count(Owner *ow)
{
    unsigned int n = 0;
    int i;

    for (i = 0; i < 12; i++) {
        if (ow->slots[i].entry != 0) {
            n++;
        }
    }
    return n;
}

static __inline__ unsigned char Usable(Entry *e)
{
    if (e->state == 0xF || e->state == 0xD)
        return 0;
    return e->detail->bAB == 0;
}

int func_173420(Obj *o)
{
    Rec *r = o->rec;
    Dst *dst = o->dst;
    Owner *ow;
    Entry *e;
    unsigned int i;
    int found;

    if (r->enabled == 0) {
        return 8;
    }
    ow = r->owner;
    found = 0;
    i = 0;
    for (;;) {
        if (i >= Count(ow))
            break;
        e = ow->slots[i].entry;
        if (e != 0 && e->model->kind == 0x2BD88B60) {
            if (Usable(e)) {
                dst->entry = e;
                found = 1;
            }
            break;
        }
        i++;
    }
    return found ? 7 : 8;
}
