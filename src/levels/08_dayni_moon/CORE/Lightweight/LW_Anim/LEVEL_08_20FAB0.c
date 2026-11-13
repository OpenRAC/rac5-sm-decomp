typedef struct Node { struct Node *next, *prev; } Node;
typedef struct Slot { unsigned int index; float scale; } Slot;
typedef struct Pool { char ***resource; Slot *slot; char *base; Node *nodes; int count; int active; float reciprocal, factor; } Pool;
extern char D_279370[];
extern void *func_11FF40(int size, int zero, char *file, int line);
extern void func_20FA78(char *pool), func_20FA38(Pool *pool);
void func_20FAB0(Pool *pool, char ***resource, Slot *slot, unsigned int count)
{
    Node *p, *end;
    ++count;
    { char *base = **resource + slot->index * 64;
    pool->resource = resource;
    pool->slot = slot;
    pool->count = count;
    pool->base = base; }
    pool->nodes = func_11FF40(count * 8, 0, D_279370, 296);
    p = pool->nodes;
    end = p + pool->count;
    while (p != end) {
        p->prev = p;
        p->next = p;
        ++p;
    }
    func_20FA78((char *)pool);
    func_20FA38(pool);
}
