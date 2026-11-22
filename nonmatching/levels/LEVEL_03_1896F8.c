/* USA LEVEL_03.REL:0x1896F8, 344-byte candidate (21 November 2026).
 * Measured pinned --flag=-mno-check-zero-division: 5 differing words; first
 * difference at 0x68.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Link {
    char *target;
} Link;

typedef struct Entry {
    int count;
    int first;
    int w8;
} Entry;

typedef struct State {
    int w0;
    int w4;
    int vals[16];
    int w48;
} State;

typedef struct Obj {
    char pad_00[0x45];
    unsigned char b45;
    char pad_46[0x54 - 0x46];
    Link *link;
    State *state;
} Obj;

extern int D_0021F414;
extern int D_002336F0;
extern int D_00221178;
extern Entry D_00221048[];
extern unsigned char D_0020E7EC;
extern int rand(void);

static __inline__ int Resolve(Link *l)
{
    char *target;

    if (l->target == 0)
        return 0;
    target = (char *)(D_0021F414 + (int)l->target);
    if (*(int *)(target + 0x40) == 0) {
        l->target = 0;
        return 0;
    }
    l->target = target;
    return 1;
}

int func_1896F8(Obj *o)
{
    Link *link = o->link;
    State *st = o->state;
    Entry *entry;
    int n;
    int r;
    unsigned int filled;
    unsigned int j;

    if (!Resolve(link))
        return 0;
    st->w0 = D_00221178;
    entry = &D_00221048[D_002336F0];
    st->w4 = 0;
    o->b45 = 0;
    n = entry->count;
    st->vals[0] = entry->first;
    if (D_0020E7EC != 0)
        st->w48 = 0;
    for (filled = 1; filled < n; ) {
        if (n != 0)
            r = rand() % n;
        else
            r = 0;
        for (j = 0; j < filled; j++) {
            if (st->vals[j] == r)
                break;
        }
        if (j == filled) {
            st->vals[filled] = r;
            filled++;
        }
    }
    return 1;
}
