/* LEVEL_01:0x0320E0 -- advances a segment index until a segment test succeeds, then finishes. */
struct Seg { char b[16]; };
struct Edge { char b[24]; };

struct Path {
    char pad0[4];
    struct Seg *seg;
    char pad1[0xC];
    unsigned short count;
};

struct Walker {
    char pad0[8];
    float x;
    float z;
    char pad1[8];
    struct Path *path;
    char pad2[0xC];
    struct Edge *edges;
    char pad3[1];
    unsigned char idx;
};

extern int func_033430(struct Seg *a, struct Edge *b, float *c);

void func_0320E0(struct Walker *w, float *v, int arg)
{
    struct Path *p = w->path;
    struct Edge *e;

    w->x = v[0];
    w->z = v[2];
    while (w->idx < p->count - 1) {
        e = &w->edges[w->idx + 1];
        if (!func_033430(&p->seg[w->idx + 1], e, v) && func_033330(w, v, w->idx))
            break;
        w->idx++;
    }
    func_032D28(w, arg);
}
