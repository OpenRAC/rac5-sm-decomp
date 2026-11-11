/* LEVEL_05:0x19AB10 -- clears flag bit 3 of the item the object refers
   to, unless the reference is empty. */
typedef struct {
    char pad[0x8];
    unsigned short flags;
    char padA[0x6];
} Item;

typedef struct {
    char pad[0x64];
    Item *items;
} Entry;

typedef struct {
    unsigned short index;
    char pad2;
    unsigned char table;
} Ref;

typedef struct {
    char pad[0x58];
    Ref *ref;
} Obj;

extern Entry D_0021B3F8[];

void func_19AB10(Obj *obj)
{
    Ref *ref = obj->ref;

    Item *item;

    if (ref->index != 0xFFFF) {
        item = &D_0021B3F8[ref->table].items[ref->index];
        item->flags &= ~8;
    }
}
