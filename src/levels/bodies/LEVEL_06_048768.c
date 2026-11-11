/* LEVEL_06:0x048768 -- placement copy of LEVEL_01_04C070.c: selects an entry by id, caches its values in the object and raises a global maximum. */
struct Ent {
    int f0;
    int f4;
    int f8;
};
struct Glob {
    char pad[0x1C74];
    int max;
};
extern struct Glob *D_001E2EAC;
extern struct Ent *func_0265A0(int id);
extern int func_026FC0(void);

int func_048768(char *o, int id, int force)
{
    struct Ent *e;
    struct Ent *n;
    struct Glob *g;
    int v;

    if (!force && *(int *)(o + 0xFC8) == id)
        return 0;
    e = func_0265A0(id);
    if (!e)
        return 0;
    if (!(e->f0 < func_026FC0()))
        return 0;
    n = func_0265A0(e->f0 + 1);
    *(float *)(o + 0x96C) = (float)e->f8;
    *(float *)(o + 0x970) = (float)e->f8;
    *(int *)(o + 0xFC8) = e->f0;
    g = D_001E2EAC;
    v = e->f4;
    if (g->max < v) {
        g->max = v;
    } else if (n) {
        if (n->f4 < v)
            g->max = v;
    }
    return 1;
}
