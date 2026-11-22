/* LEVEL_16:0x017930 -- level-dependent setup: spawns the keyed helper in mode 20, otherwise polls a status pair; returns 1 unless the poll fails. */
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
    char pad_00[0x4];
    int w_04;
} Hdr;

typedef struct {
    char pad_00[0xA8];
    Hdr *hdr_A8;
} Slot;

typedef struct {
    char pad_00[0x58];
    int *extra;
} Obj;

extern int D_001D04A0;
extern List *D_001B48A0;
extern char D_001CCC80[];
extern char D_001E4090[];
extern Slot D_001E0000;

extern Obj *func_06F830(Entry *e, unsigned int key, char *tag, int flags);
extern void func_036710(char *table, Obj *o, int n);
extern void func_112FF8(void);
extern int func_1130A8(void);

static __inline__ Entry *FindEntry(unsigned int key)
{
    List *lst;
    unsigned int i;

    lst = D_001B48A0;
    for (i = 0; i < lst->count; i++) {
        if (lst->items[i].key == key) {
            return &lst->items[i];
        }
    }
    return 0;
}

static __inline__ Obj *SpawnKeyed(unsigned int find, unsigned int key, char *tag, int flags)
{
    Entry *found;

    found = FindEntry(find);
    if (found == 0) {
        return 0;
    }
    return func_06F830(found, key, tag, flags);
}

int func_017930(void)
{
    Obj *o;

    if (D_001D04A0 == 20) {
        o = SpawnKeyed(0xC7358C6B, 0x36919224, D_001CCC80, 0xFF);
        if (o != 0)
            func_036710(D_001E4090, o, 0);
        return 1;
    }
    func_112FF8();
    if (func_1130A8() == 0) {
        D_001E0000.hdr_A8->w_04 = 0;
        return 0;
    }
    return 1;
}
