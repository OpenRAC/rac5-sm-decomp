/* LEVEL_22:0x0D5C60 -- placement copy of LEVEL_01_0F0270.c: for each node of the object's list, moves the flagged items of the node's pool onto its free list (running the release step on each) and updates the node's count. */
typedef struct Item Item;
struct Item { Item *next; unsigned char b4; };
typedef struct Pool { Item *first; Item *free; } Pool;
typedef struct Node Node;
struct Node { Node *next; char pad04[8]; Pool *pool; int count; };
typedef struct Obj { char pad00[8]; Node *nodes; } Obj;
extern void func_0D5C58(Item *it);
void func_0D5C60(Obj *o)
{
    Node *n;
    Pool *pool;
    Item **slot;
    Item *it;
    Item *next;
    int count;
    for (n = o->nodes; n != 0; n = n->next) {
        pool = n->pool;
        count = n->count;
        slot = &pool->first;
        for (it = pool->first; it != 0; it = next) {
            next = it->next;
            if (it->b4 != 0) {
                func_0D5C58(it);
                count--;
                *slot = next;
                it->next = pool->free;
                pool->free = it;
            } else {
                slot = &it->next;
            }
        }
        n->count = count;
    }
}
