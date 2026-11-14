/* USA LEVEL_02.REL:0x1D94A8, 84-byte candidate (14 November 2026).
 * Measured pinned: 18 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Kind {
    char pad0[0x3F];
    unsigned char type;
} Kind;

typedef struct Entry {
    char pad0[0x40];
    Kind *kind;
    char pad44[0x80 - 0x44];
} Entry;

typedef struct Pool {
    char pad0[0x44];
    Entry *entries;
    unsigned int count;
} Pool;

typedef struct Obj {
    char pad0[0x54];
    Entry **out;
} Obj;

extern Pool *D_0021BD50;

int func_1D94A8(Obj *o)
{
    Entry **out = o->out;
    unsigned int i;

    i = 0;
    while (i < D_0021BD50->count) {
        Entry *e = &D_0021BD50->entries[i];

        i++;
        if (e->kind == 0)
            continue;
        if (e->kind->type != 3)
            continue;
        *out = e;
        break;
    }
    return 1;
}
