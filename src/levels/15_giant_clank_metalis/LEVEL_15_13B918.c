/* LEVEL_15:0x13B918 -- placement copy of LEVEL_08_210008.c: acquires a pooled entry for a slot, linking it into the pool list. */
typedef struct Link {
    struct Link *next;
    struct Link *prev;
} Link;
typedef struct Entry {
    char pad[0xC4];
    int refs;
    char pad2[0xC];
    Link link;
} Entry;
typedef struct Mgr {
    char pad[0xC];
    Link *list;
} Mgr;
extern Entry *func_13B870(Link *list, float, float);
extern void func_13B338(Entry *e);
extern Entry *func_13B390(Mgr *m, float a, float b);

int func_13B918(int unused, Entry **slot, Mgr *mgr, float fa, float fb)
{
    Link *list;
    Entry *old;
    Entry *e;
    Link *first;
    Link *last;
    Link *node;

    old = *slot;
    list = mgr->list;
    e = func_13B870(list, fa, fb);

    if (e == 0) {
        if (old != 0 && old->refs == 1) {
            func_13B338(old);
            old = 0;
        }
        e = func_13B390(mgr, fa, fb);
        if (e == 0) {
            return 0;
        }
        node = &e->link;
        first = list->next;
        last = first->prev;
        node->next = first;
        node->prev = last;
        last->next = node;
        first->prev = node;
    }
    e->refs++;
    *slot = e;
    if (old != 0) {
        func_13B338(old);
    }
    return 1;
}
