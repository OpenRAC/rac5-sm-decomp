/* LEVEL_01:0x153F50 -- walks every group of the owner and steps through each group's 0x84-byte items without touching them. */
typedef struct Item {
    char pad00[0x84];
} Item;

typedef struct Group {
    struct Group *next;
    char pad04[8];
    Item *items;
    int count;
} Group;

typedef struct Owner {
    char pad00[8];
    Group *groups;
} Owner;

void func_153F50(Owner *owner)
{
    Group *g;
    Item *item;
    Item *end;

    for (g = owner->groups; g != 0; g = g->next) {
        item = g->items;
        end = item + g->count;
        do {
            item++;
        } while (item != end);
    }
}
