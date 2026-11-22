/* LEVEL_20:0x015718 -- placement copy of LEVEL_16_017930.c: level-dependent setup: spawns the keyed helper in mode 20, otherwise polls a status pair; returns 1 unless the poll fails. */
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

extern int D_00131510;
extern List *D_00116F80;
extern char D_0012DD00[];
extern char D_0013BA10[];
extern Slot D_00137980;

extern Obj *func_05E838(Entry *e, unsigned int key, char *tag, int flags);
extern void func_030AF8(char *table, Obj *o, int n);
extern void func_0E5B68(void);
extern int func_0E5C18(void);

static __inline__ Entry *FindEntry(unsigned int key)
{
    List *lst;
    unsigned int i;

    lst = D_00116F80;
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
    return func_05E838(found, key, tag, flags);
}

int func_015718(void)
{
    Obj *o;

    if (D_00131510 == 20) {
        o = SpawnKeyed(0xC7358C6B, 0x36919224, D_0012DD00, 0xFF);
        if (o != 0)
            func_030AF8(D_0013BA10, o, 0);
        return 1;
    }
    func_0E5B68();
    if (func_0E5C18() == 0) {
        D_00137980.hdr_A8->w_04 = 0;
        return 0;
    }
    return 1;
}
