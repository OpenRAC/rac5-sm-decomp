/* USA LEVEL_01.REL:0x138BD0, 180-byte candidate (14 November 2026).
 * Measured pinned: 22 differing words; first difference at 0x3C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Entry {
    char pad_00[0x24];
    unsigned int key;
    char pad_28[8];
    unsigned int count;
    char pad_34[0x44 - 0x34];
} Entry;

typedef struct Table {
    char pad_00[0x34];
    Entry *entries;
    unsigned int n;
} Table;

typedef struct Rec {
    char pad_00[0x20];
    Entry *entry;
    unsigned char b24;
    unsigned char b25;
    unsigned char b26;
} Rec;

typedef struct Obj {
    char pad_00[0x58];
    Rec *rec;
} Obj;

extern Table *D_00206D90;

static __inline__ unsigned int *Min(unsigned int *a, unsigned int *b)
{
    if (*a < *b) {
        return a;
    }
    return b;
}

static __inline__ Entry *find_entry(Table *t, unsigned int key)
{
    Entry *cur;
    unsigned int i;

    for (i = 0; i < t->n; i++) {
        cur = &t->entries[i];
        if (cur->key == key) {
            return cur;
        }
    }
    return 0;
}

int func_138BD0(Obj *o)
{
    Rec *r = o->rec;
    Entry *e;
    unsigned int cap;

    e = find_entry(D_00206D90, 0x462E4E09);
    r->entry = e;
    if (e == 0) {
        return 0;
    }
    if (e->count == 0) {
        return 0;
    }
    cap = 8;
    r->entry = e;
    r->b24 = 0;
    r->b25 = *(unsigned char *)Min(&r->entry->count, &cap);
    r->b26 = 0;
    return 1;
}
