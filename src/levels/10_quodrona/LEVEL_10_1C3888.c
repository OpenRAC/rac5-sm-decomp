/* LEVEL_10:0x1C3888 -- placement copy of LEVEL_01_1B6000.c: spawns the keyed helper object for a source whose clamped level slot is not yet full, counts it and forwards the pair to the attach routine. */

typedef struct {
    char pad_00[0xF8];
    int level;
} Src;

typedef struct {
    char pad_00[0x24];
    unsigned int key;
    char pad_28[0x1C];
} Entry;

typedef struct {
    char pad_00[0x34];
    Entry *items;
    unsigned int count;
} List;

typedef struct {
    char pad_00[0x58];
    int *extra;
} Obj;

extern List *D_0020F9F0;
extern int D_00211C90[];
extern char D_00220D40[];

extern Obj *func_07CB88(Entry *e, unsigned int key, char *tag, int flags);
extern int func_1C3A18(Obj *a, Obj *b, int c, int d);

static __inline__ int *MaxRef(int *a, int *b)
{
    if (*a < *b) {
        return b;
    }
    return a;
}

static __inline__ Entry *FindEntry(unsigned int key)
{
    List *lst;
    unsigned int i;

    lst = D_0020F9F0;
    for (i = 0; i < lst->count; i++) {
        if (lst->items[i].key == key) {
            return &lst->items[i];
        }
    }
    return 0;
}

static __inline__ Obj *SpawnKeyed(unsigned int key, char *tag, int flags)
{
    Entry *found;

    found = FindEntry(key);
    if (found == 0) {
        return 0;
    }
    return func_07CB88(found, key, tag, flags);
}

int func_1C3888(Obj *o, int a, int b, Src *s)
{
    int zero;
    int idx;
    Obj *n;

    zero = 0;
    idx = *MaxRef(&zero, &s->level);
    if (D_00211C90[idx] == 2) {
        return 0;
    }
    n = SpawnKeyed(0xA6FC50BBu, D_00220D40, 0xFF);
    if (n == 0) {
        return 0;
    }
    D_00211C90[idx] = D_00211C90[idx] + 1;
    *n->extra = *o->extra;
    return func_1C3A18(o, n, a, b);
}
