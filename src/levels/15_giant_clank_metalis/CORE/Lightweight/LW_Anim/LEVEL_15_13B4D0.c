/* LEVEL_15:0x13B4D0 -- placement copy of LEVEL_08_20FAB0.c. */
typedef struct Node { struct Node *next, *prev; } Node;
typedef struct Slot { unsigned int index; float scale; } Slot;
typedef struct Pool { char ***resource; Slot *slot; char *base; Node *nodes; int count; int active; float reciprocal, factor; } Pool;
extern char D_1732A8[];
extern void *func_0D4FE0(int size, int zero, char *file, int line);
extern void func_13B498(char *pool), func_13B458(Pool *pool);
void func_13B4D0(Pool *pool, char ***resource, Slot *slot, unsigned int count)
{
    Node *p, *end;
    ++count;
    { char *base = **resource + slot->index * 64;
    pool->resource = resource;
    pool->slot = slot;
    pool->count = count;
    pool->base = base; }
    pool->nodes = func_0D4FE0(count * 8, 0, D_1732A8, 296);
    p = pool->nodes;
    end = p + pool->count;
    while (p != end) {
        p->prev = p;
        p->next = p;
        ++p;
    }
    func_13B498((char *)pool);
    func_13B458(pool);
}
