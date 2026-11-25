/* LEVEL_04:0x191CE8 -- placement copy of LEVEL_01_186748.c: walks the object's chain of pools, ages every entry by its decay and removes the ones that run out (releasing each and replacing it with the pool's last entry), then stores the new entry count of each pool. */
typedef struct {
    float f00;
    float f04;
    char pad08[0x38];
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
    char pad0C[0x10];
    int w1C;
} Obj;

extern void func_191CE0(void);

void func_191CE8(Obj *o)
{
    Node *node;
    Item *item;
    Item *end;
    float v;
    int w;

    w = o->w1C;
    for (node = o->list; node != 0; node = node->next) {
        item = node->items;
        end = item + node->count;
        do {
            v = item->f00 - item->f04;
            if (!(v < 0.0f)) {
                item->f00 = v;
                item++;
            } else {
                ((void (*)(Item *, int))func_191CE0)(item, w);
                end--;
                if (item != end) {
                    *item = *end;
                }
            }
        } while (item != end);
        node->count = end - node->items;
    }
}
