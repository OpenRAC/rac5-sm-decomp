/* LEVEL_04.REL:0x0746D8: reviewed 336-byte candidate, held for ABI review.
 * Walks an owner's chain of nodes and their item lists up to the given counts,
 * releasing every held resource, then empties the owner.
 * pinned C with gnu-ee-trial links 336/336 bytes and is byte-exact at this and
 * 2 other USA placements, but the prototypes disagree.
 * It defines the function returning void with (pointer, pointer), but the
 * accepted caller LEVEL_04_074828.c declares it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Item_0746D8 {
    char pad[0x3C];
    struct Item_0746D8 *next;
};

struct Node_0746D8;

struct Link_0746D8 {
    int pad0;
    void *res;
    char pad1[8];
    struct Item_0746D8 *items;
    int pad2;
    struct Node_0746D8 *next;
};

struct Node_0746D8 {
    char pad[0x30];
    struct Link_0746D8 link;
};

struct Owner_0746D8 {
    char pad[0x3C];
    struct Node_0746D8 *head;
    void *tail;
};

struct Limits_0746D8 {
    char pad0[0x1C];
    unsigned int nodes;
    char pad1[0x38 - 0x20];
    unsigned int items;
};

extern void *D_0020F858;
extern void func_09A948(void *a0);

static __inline__ void Release(void *p)
{
    if (p != 0) {
        if (p == D_0020F858) {
            D_0020F858 = 0;
        } else {
            func_09A948(p);
        }
    }
}

void func_0746D8(struct Owner_0746D8 *owner, struct Limits_0746D8 *lim)
{
    struct Node_0746D8 *head;
    struct Node_0746D8 *node;
    struct Node_0746D8 *next;
    struct Link_0746D8 *link;
    struct Item_0746D8 *item;
    struct Item_0746D8 *nextItem;
    unsigned int i;
    unsigned int j;

    head = owner->head;
    if (head != 0) {
        node = head;
        for (i = 0; i < lim->nodes; i++) {
            if (node != 0) {
                link = &node->link;
                next = link->next;
                if (link->res != 0) {
                    Release(link->res);
                    link->res = 0;
                }
                item = link->items;
                for (j = 0; j < lim->items && item != 0; j++) {
                    nextItem = item->next;
                    Release(item);
                    item = nextItem;
                }
                Release(node);
                node = next;
            }
        }
        owner->head = 0;
        owner->tail = 0;
    }
}
