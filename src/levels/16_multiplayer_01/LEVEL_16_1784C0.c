/* LEVEL_16:0x1784C0 -- once only, looks up three fixed ids in the manager's entry table and runs a callback over every item of each entry found. */

struct Item_1784C0 {
    char pad[0x62];
    unsigned char extra;
};

struct Entry_1784C0 {
    int id;
    char pad[0xC];
    struct Item_1784C0 *items;
    unsigned int count;
};

struct Mgr_1784C0 {
    char pad[0x24];
    struct Entry_1784C0 *entries;
    unsigned int count;
};

struct Ids_1784C0 {
    int v[3];
};

extern unsigned char D_001BE308;
extern struct Mgr_1784C0 *D_001B48A0;
extern struct Ids_1784C0 D_001D8290;

extern void func_076328(struct Item_1784C0 *p);

void func_1784C0(void)
{
    struct Ids_1784C0 ids;
    struct Entry_1784C0 *found;
    struct Entry_1784C0 *e;
    struct Item_1784C0 *item;
    unsigned int i;
    unsigned int j;
    unsigned int k;

    if (D_001BE308 == 0) {
        ids = D_001D8290;
        found = 0;
        for (i = 0; i < 3; i++) {
            for (j = 0; j < D_001B48A0->count; j++) {
                e = D_001B48A0->entries + j;
                if (e->id == ids.v[i]) {
                    found = e;
                    break;
                }
            }
            if (found != 0) {
                item = found->items;
                for (k = 0; k < found->count; k++) {
                    func_076328(item);
                    item = (struct Item_1784C0 *)((char *)item + 0x64 + item->extra * 8);
                }
            }
        }
    }
    D_001BE308 = 1;
}
