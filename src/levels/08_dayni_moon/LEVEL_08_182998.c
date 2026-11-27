/* LEVEL_08:0x182998 -- placement copy of LEVEL_04_1771A8.c: scans a list of entries and returns the one nearest to the input point, or 0 when none. */
typedef struct Ent {
    char pad00[0x20];
    float a20;
    char pad24[4];
    float a28;
    char pad2C[4];
    float a30;
    char pad34[4];
    float a38;
} Ent;

typedef struct List {
    char pad00[0x40];
    Ent *ents[8];
    unsigned char count;
} List;

typedef struct G {
    char pad00[0x58];
    List *list;
} G;

typedef struct Obj {
    char pad00[0x30];
    float pos[3];
} Obj;

extern G *D_00251E14;

static __inline__ float Dist2(float *a, float *b)
{
    float dx;
    float dy;

    dx = a[0] - b[0];
    dy = a[2] - b[1];
    return dx * dx + dy * dy;
}

Ent *func_182998(Obj *obj)
{
    G *g = D_00251E14;
    Ent *best = 0;
    float best_d = 1.0000000150474662e+30f;
    unsigned int n = g->list->count;
    unsigned int i;
    Ent *e;
    float t[2];
    float d;

    for (i = 0; i < n; i++) {
        e = g->list->ents[i];
        t[0] = e->a30 + (e->a20 + e->a20);
        t[1] = e->a38 + (e->a28 + e->a28);
        d = Dist2(obj->pos, t);
        if (d < best_d) {
            best_d = d;
            best = e;
        }
    }
    return best;
}
