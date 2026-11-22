/* LEVEL_10:0x169C00 -- turns the record's stored offsets into pointers inside the loaded data (dropping those whose target has no header), fails when the first entry of either table is missing, then fills the output block with cleared counters and the scaled level. */
typedef struct {
    char pad0[0x40];
    int w40;
} Entry;

typedef struct {
    int p[8];
    int q[4];
    int w30;
    int w34;
    float f38;
    int w3C;
} Rec;

typedef struct {
    int a[4];
    float b[4];
} Out;

typedef struct {
    char pad0[0x54];
    Rec *rec;
    Out *out;
} Obj;

extern char *D_0020F9F4;

static __inline__ void Fix(int *slot)
{
    Entry *e;

    if (*slot != 0) {
        e = (Entry *)(D_0020F9F4 + *slot);
        if (e->w40 == 0)
            *slot = 0;
        else
            *slot = (int)e;
    }
}

int func_169C00(Obj *o)
{
    Rec *r = o->rec;
    Out *out;
    int i, j, k;

    for (i = 0; i < 8; i++)
        Fix(&r->p[i]);
    if (r->p[0] == 0)
        return 0;
    for (j = 0; j < 4; j++)
        Fix(&r->q[j]);
    if (r->q[0] == 0)
        return 0;
    Fix(&r->w34);
    if (r->w3C != 0)
        r->w3C = (int)(D_0020F9F4 + r->w3C);
    out = o->out;
    for (k = 0; k < 4; k++) {
        out->a[k] = 0;
        out->b[k] = r->f38 * 30.0f;
    }
    return 1;
}
