/* LEVEL_22:0x02C458 -- placement copy of LEVEL_15_11D1A0.c: placement copy of LEVEL_01_036260.c: runs the per-item helper over every item of every group in the owner's list. */
typedef struct Group {
    struct Group *next;
    char pad_04[8];
    char *items;
    int count;
} Group;

extern void func_02BCB0(void);

void func_02C458(char *owner)
{
    Group *group = *(Group **)(owner + 8);
    char *item;
    char *end;

    if (group != 0) {
        do {
            item = group->items;
            end = item + group->count * 0x84;
            do {
                ((void (*)(char *item))func_02BCB0)(item);
                item += 0x84;
            } while (item != end);
            group = group->next;
        } while (group != 0);
    }
}
