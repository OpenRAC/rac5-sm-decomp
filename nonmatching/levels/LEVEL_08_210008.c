/* LEVEL_08.REL:0x210008: reviewed 236-byte candidate, held for ABI review.
 * Acquires a pooled entry for a slot, linking it into the pool list.
 * gnu-ee-trial C with gnu-ee-trial links 236/236 bytes and is byte-exact at
 * this USA placement, but the prototypes disagree.
 * It defines the function returning int with (int, pointer, pointer, float,
 * float), but the accepted caller LEVEL_08_2100F8.c declares it returning void
 * with (pointer, pointer, pointer, float, float).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
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
extern Entry *func_20FE50(Link *list);
extern void func_20F918(Entry *e);
extern Entry *func_20F970(Mgr *m, float a, float b);

int func_210008(int unused, Entry **slot, Mgr *mgr, float fa, float fb)
{
    Link *list;
    Entry *old;
    Entry *e;
    Link *first;
    Link *last;
    Link *node;

    old = *slot;
    list = mgr->list;
    e = func_20FE50(list);

    if (e == 0) {
        if (old != 0 && old->refs == 1) {
            func_20F918(old);
            old = 0;
        }
        e = func_20F970(mgr, fa, fb);
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
        func_20F918(old);
    }
    return 1;
}
