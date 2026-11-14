/* USA LEVEL_01.REL:0x0F0270, 180-byte candidate (14 November 2026).
 * Measured pinned: 8 differing words; first difference at 0x2C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Item Item;
struct Item { Item *next; unsigned char b4; };
typedef struct Pool { Item *first; Item *free; } Pool;
typedef struct Node Node;
struct Node { Node *next; char pad04[8]; Pool *pool; int count; };
typedef struct Obj { char pad00[8]; Node *nodes; } Obj;
extern void func_0F0268(Item *it);
void func_0F0270(Obj *o)
{
    Node *n;
    Pool *pool;
    Item **slot;
    Item *it;
    Item *next;
    int count;
    for (n = o->nodes; n != 0; n = n->next) {
        pool = n->pool;
        slot = &pool->first;
        for (it = *slot, count = n->count; it != 0; it = next) {
            next = it->next;
            if (it->b4 != 0) {
                func_0F0268(it);
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
