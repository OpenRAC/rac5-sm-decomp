/* LEVEL_01:0x033668 -- tests whether a point lies inside the convex quad cell of the given index by four edge cross products. */

typedef struct {
    char pad_00[4];
    int verts;
} VList;

typedef struct {
    char pad_00[0x18];
    VList *a;
    VList *b;
    char pad_20[8];
    int edges;
} Obj;

int func_033668(Obj *o, float *pt, unsigned char idx)
{
    float d[2];
    float e[2];
    int av;
    int bv;
    int ev;
    float *a;
    float *b;
    float *b2;
    float *ed;

    av = o->a->verts;
    bv = o->b->verts;
    ev = o->edges;
    a = (float *)((idx << 4) + av);
    d[0] = pt[0] - a[0];
    d[1] = pt[2] - a[2];
    ed = (float *)(ev + idx * 24);
    if (d[1] * ed[0] - d[0] * ed[1] < 0.0f) {
        return 0;
    }
    b = (float *)((idx << 4) + bv);
    d[0] = pt[0] - b[0];
    d[1] = pt[2] - b[2];
    if (0.0f < d[1] * ed[2] - d[0] * ed[3]) {
        return 0;
    }
    if (0.0f < d[1] * ed[4] - d[0] * ed[5]) {
        return 0;
    }
    b2 = b + 4;
    e[0] = a[4] - b2[0];
    e[1] = a[6] - b2[2];
    d[0] = pt[0] - b[4];
    d[1] = pt[2] - b2[2];
    if (0.0f < d[1] * e[0] - d[0] * e[1]) {
        return 0;
    }
    return 1;
}
