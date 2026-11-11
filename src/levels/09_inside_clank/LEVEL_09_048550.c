/* LEVEL_09:0x048550 -- placement copy of LEVEL_01_04C070.c: selects an entry by id, caches its values in the object and raises a global maximum. */
struct Ent {
    int f0;
    int f4;
    int f8;
};
struct Glob {
    char pad[0x1C74];
    int max;
};
extern struct Glob *D_001DDDAC;
extern struct Ent *func_026FF8(int id);
extern int func_027A40(void);

int func_048550(char *o, int id, int force)
{
    struct Ent *e;
    struct Ent *n;
    struct Glob *g;
    int v;

    if (!force && *(int *)(o + 0xFC8) == id)
        return 0;
    e = func_026FF8(id);
    if (!e)
        return 0;
    if (!(e->f0 < func_027A40()))
        return 0;
    n = func_026FF8(e->f0 + 1);
    *(float *)(o + 0x96C) = (float)e->f8;
    *(float *)(o + 0x970) = (float)e->f8;
    *(int *)(o + 0xFC8) = e->f0;
    g = D_001DDDAC;
    v = e->f4;
    if (g->max < v) {
        g->max = v;
    } else if (n) {
        if (n->f4 < v)
            g->max = v;
    }
    return 1;
}
