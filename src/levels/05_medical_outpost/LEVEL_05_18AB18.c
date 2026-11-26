/* LEVEL_05:0x18AB18 -- init handler of a trigger: rebases its four stored handle offsets (three must resolve to live records), collects the nearby class-0x29 items into its list and flags them, and optionally parks the first handle's object. */
typedef struct {
    char pad_00[0x46];
    unsigned char state_46;
    char pad_47[0x1D];
    unsigned int flags_64;
    char pad_68[8];
    int w_70;
} Item;

typedef struct {
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
} Handles;

typedef struct {
    Item *list_000[72];
    unsigned int count_120;
} List;

typedef struct {
    char pad_00[0x54];
    Handles *h_54;
    List *list_58;
} Obj;

extern unsigned char *D_001F5E14;
extern unsigned char D_001F78D4;
extern float D_00211620[];
extern unsigned int func_01B980(Item **buf, int cap, float *pos, int p6, int p7, int p8, int one, float r);

static __inline__ int Rebase(unsigned int *slot)
{
    unsigned char *p;

    if (*slot == 0) {
        return 0;
    }
    p = D_001F5E14 + *slot;
    if (*(unsigned int *)(p + 0x40) == 0) {
        *slot = 0;
        return 0;
    }
    *slot = (unsigned int)p;
    return 1;
}

static __inline__ int Reloc(unsigned int *slot)
{
    if (*slot == 0) {
        return 0;
    }
    *slot = (unsigned int)(D_001F5E14 + *slot);
    return 1;
}

int func_18AB18(Obj *o)
{
    Handles *h;
    List *l;
    Item *buf[72];
    Item *it;
    Item *p;
    unsigned int n;
    unsigned int i;

    h = o->h_54;
    l = o->list_58;
    if (!Rebase(&h->a)) {
        return 0;
    }
    if (!Rebase(&h->b)) {
        return 0;
    }
    if (!Reloc(&h->c)) {
        return 0;
    }
    if (!Rebase(&h->d)) {
        return 0;
    }
    n = func_01B980(buf, 0x48, D_00211620, 0x29, 1, 0x20, 0, 16.0f);
    for (i = 0; i < n; i++) {
        it = buf[i];
        l->list_000[i] = it;
        it->flags_64 |= 0x20;
    }
    l->count_120 = n;
    if (D_001F78D4 != 0) {
        p = (Item *)h->a;
        p->state_46 = 2;
        p->w_70 = 0;
        p->flags_64 |= 0x200000;
        return 0;
    }
    return 1;
}
