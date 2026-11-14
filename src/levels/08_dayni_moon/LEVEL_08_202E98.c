/* LEVEL_08:0x202E98 -- walks the object's list of groups and runs the helper on every item chained from each group's first entry. */
struct Item {
    char pad_00[0x48];
    struct Item *next;
};

struct Head {
    struct Item *first;
};

struct Group {
    struct Group *next;
    char pad_04[8];
    struct Head *head;
};

struct Obj {
    char pad_00[8];
    struct Group *groups;
};

extern void func_202960(struct Item *item);

void func_202E98(struct Obj *o)
{
    struct Group *g;
    struct Item *p;

    for (g = o->groups; g != 0; g = g->next) {
        for (p = g->head->first; p != 0; p = p->next)
            func_202960(p);
    }
}
