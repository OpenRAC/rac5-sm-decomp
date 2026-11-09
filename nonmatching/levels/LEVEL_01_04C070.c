/* LEVEL_01.REL:0x04C070: reviewed 208-byte candidate, held for ABI review.
 * Selects an entry by id, caches its values in the object and raises a global
 * maximum.
 * pinned C with gnu-ee-trial links 208/208 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * It declares func_027FF0 returning pointer with (int), but the accepted
 * LEVEL_01_027FF0.c defines it returning int with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Ent {
    int f0;
    int f4;
    int f8;
};
struct Glob {
    char pad[0x1C74];
    int max;
};
extern struct Glob *D_001F3FAC;
extern struct Ent *func_027FF0(int id);
extern int func_028BD8(void);

int func_04C070(char *o, int id, int force)
{
    struct Ent *e;
    struct Ent *n;
    struct Glob *g;
    int v;

    if (!force && *(int *)(o + 0xFC8) == id)
        return 0;
    e = func_027FF0(id);
    if (!e)
        return 0;
    if (!(e->f0 < func_028BD8()))
        return 0;
    n = func_027FF0(e->f0 + 1);
    *(float *)(o + 0x96C) = (float)e->f8;
    *(float *)(o + 0x970) = (float)e->f8;
    *(int *)(o + 0xFC8) = e->f0;
    g = D_001F3FAC;
    v = e->f4;
    if (g->max < v) {
        g->max = v;
    } else if (n) {
        if (n->f4 < v)
            g->max = v;
    }
    return 1;
}
