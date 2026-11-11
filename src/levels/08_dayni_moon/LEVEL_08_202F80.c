/* LEVEL_08:0x202F80 -- walks the object's chain of pools and removes every entry whose lifetime has run out (releasing it and replacing it with the pool's last entry), then stores the new entry count of each pool. */
typedef struct {
    char pad00[0x2C];
    float f2C;
    float f30;
} Item;

typedef struct Node {
    struct Node *next;
    char pad04[8];
    Item *items;
    int count;
} Node;

typedef struct {
    char pad00[8];
    Node *list;
} Obj;

extern char D_003EB1C0[];
extern unsigned int func_003480(void);
extern void func_1156C8(void *a0, Item *a1);

void func_202F80(Obj *o)
{
    float now;
    Node *node;
    Item *item;
    Item *end;

    now = *(float *)(func_003480() + 0x38);
    for (node = o->list; node != 0; node = node->next) {
        item = node->items;
        end = item + node->count;
        do {
            if (item->f30 <= now - item->f2C) {
                func_1156C8(D_003EB1C0, item);
                end--;
                *item = *end;
            } else {
                item++;
            }
        } while (item != end);
        node->count = end - node->items;
    }
}
