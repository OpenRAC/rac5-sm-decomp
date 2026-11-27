/* USA SCUS_976.15 boot: RIBBON_ClearInactiveJoints__FP20PAR_ParticleIteratorPC9PAR_Groupii, 0x01E75308.
 * Observed body: 240 bytes, inside a 384-byte interval whose remaining words
 * are unrelated fragments (not claimed here). Measured 26 November 2026: all
 * 240 body bytes are exact after independent SN linking at the retail address
 * under the pinned default route and gnu-ee-trial-divpad, with -O2 -G0
 * -mno-check-zero-division (the per-file flag the repository already uses for
 * 535 boot sources; without it the compiler inserts a divide-by-zero check and
 * the body is 8 bytes longer) and the default GNU assembler. Plain
 * gnu-ee-trial is not exact. The default tools are rebuilt, not
 * hash-qualified. This is an unaccepted witness: complete-program integration,
 * boundaries, types and qualification require separate review. No promotion or
 * matching credit is claimed here. Reconstructed from the retail boot. It
 * looks up, through the unnamed helper at 0x01E75280, the position of the
 * particle iterator inside the group's circular node list. When found, it
 * clears the "last" counter of every node from the list head up to the
 * iterator's node, then rebases that node's first/last counters from the
 * iterator position divided by the stride, and returns 1. When not found it
 * clears the counter of every node of the group and returns 0. Source shape
 * that mattered: the iterator's node is read once into a local before the
 * clearing loop, and the not-found loop uses its own variable.
 */
typedef struct PAR_Node {
    struct PAR_Node *prev;
    struct PAR_Node *next;
    int base;
    unsigned short first;
    unsigned short last;
} PAR_Node;
typedef struct PAR_Group {
    int w00;
    PAR_Node *list;
    struct PAR_Group *next;
    struct PAR_Group *prev;
} PAR_Group;
typedef struct PAR_ParticleIterator {
    PAR_Node *node;
    int pos;
} PAR_ParticleIterator;
extern int func_1E75280(PAR_ParticleIterator *, PAR_Node *, PAR_Node *, int, int);

int RIBBON_ClearInactiveJoints__FP20PAR_ParticleIteratorPC9PAR_Groupii(PAR_ParticleIterator *it, const PAR_Group *g, int stride, int off) {
    PAR_Node *head = g->list;
    PAR_Node *n;
    PAR_Node *m, *end;
    int v;
    if (func_1E75280(it, head, head->prev, stride, off)) {
        end = it->node;
        for (n = head; n != end; n = n->next)
            n->last = 0;
        v = (it->pos - n->base) / stride;
        n->last -= v - n->first;
        n->first = v;
        return 1;
    }
    for (m = g->list; m != (PAR_Node *)g; m = m->next)
        m->last = 0;
    return 0;
}
