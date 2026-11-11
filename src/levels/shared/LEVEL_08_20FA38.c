/* LEVEL_08:0x20FA38 -- links each pool entry to itself and clears the active count. */
struct L { struct L *next; struct L *prev; };
struct P { char pad[0xC]; struct L *first; int count; int active; };
void func_20FA38(struct P *pool)
{
    struct L *p = pool->first;
    struct L *end = p + pool->count;
    pool->active = 0;
    for (; p != end; p++) {
        p->prev = p;
        p->next = p;
    }
}
