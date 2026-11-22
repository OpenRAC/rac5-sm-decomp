/* USA LEVEL_01.REL:0x186748 (21 November 2026): exact linked bytes under gnu-
 * ee-trial, held.
 * Its form stays out of the accepted set because a placement declares
 * func_186740 unlike its accepted definition.
 * Reconcile the prototypes (EE ABI rules in AGENTS.md) before promotion. No
 * matching credit.
 */
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

extern void func_186740(Item *a0, int a1);

void func_186748(Obj *o)
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
                func_186740(item, w);
                end--;
                if (item != end) {
                    *item = *end;
                }
            }
        } while (item != end);
        node->count = end - node->items;
    }
}
