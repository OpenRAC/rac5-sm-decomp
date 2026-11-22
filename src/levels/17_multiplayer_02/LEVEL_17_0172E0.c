/* LEVEL_17:0x0172E0 -- placement copy of LEVEL_16_017930.c: level-dependent setup: spawns the keyed helper in mode 20, otherwise polls a status pair; returns 1 unless the poll fails. */
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

extern int D_001C3920;
extern List *D_001A7EA0;
extern char D_001C0100[];
extern char D_001D5390[];
extern Slot D_001D1300;

extern Obj *func_06FE68(Entry *e, unsigned int key, char *tag, int flags);
extern void func_036060(char *table, Obj *o, int n);
extern void func_112788(void);
extern int func_112838(void);

static __inline__ Entry *FindEntry(unsigned int key)
{
    List *lst;
    unsigned int i;

    lst = D_001A7EA0;
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
    return func_06FE68(found, key, tag, flags);
}

int func_0172E0(void)
{
    Obj *o;

    if (D_001C3920 == 20) {
        o = SpawnKeyed(0xC7358C6B, 0x36919224, D_001C0100, 0xFF);
        if (o != 0)
            func_036060(D_001D5390, o, 0);
        return 1;
    }
    func_112788();
    if (func_112838() == 0) {
        D_001D1300.hdr_A8->w_04 = 0;
        return 0;
    }
    return 1;
}
