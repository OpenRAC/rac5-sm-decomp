/* LEVEL_04:0x1D5D00 -- removes the first matching pointer from the object's list by moving the final entry into its slot. */
typedef struct List {
    char pad_00[0x47];
    unsigned char count;
} List;

typedef struct Obj {
    char pad_00[0x54];
    void **items;
    List *list;
} Obj;

void func_1D5D00(Obj *o, void *needle)
{
    unsigned int i;
    List *list;
    void **items;

    items = o->items;
    list = o->list;

    for (i = 0; i < list->count; i++) {
        if (items[i] == needle) {
            void **last;

            list->count--;
            last = items + list->count;
            items[i] = *last;
            return;
        }
    }
}
