/* LEVEL_15:0x134500 -- builds four sub-objects in one block and runs their initializers. */
typedef struct {
    char pad[8];
    short delta;
    short pad2;
    void (*fn)(void *);
} VT;
typedef struct {
    VT *vt;
} Obj;
typedef struct {
    char pad[0x6C];
    Obj *p[4];
    Obj *blk;
} G;
extern G D_002F4F88;
extern char D_001719A0[];
extern VT D_00171A98;
extern VT D_00171A50;
extern VT D_00171A08;
extern VT D_001719C0;
extern void *func_0D4FE0(int size, int a, char *file, int line);

void func_134500(void)
{
    G *g = &D_002F4F88;
    Obj *t;
    Obj *u;
    int i;
    Obj **pp;
    pp = g->p;
    t = func_0D4FE0(0x1C, 0, D_001719A0, 0x35C);
    g->blk = t;
    if (t)
        t->vt = &D_00171A98;
    u = g->blk + 1;
    g->p[0] = t;
    if (u)
        u->vt = &D_00171A50;
    t = g->blk + 2;
    pp[1] = u;
    if (t)
        t->vt = &D_00171A08;
    u = g->blk + 3;
    pp[2] = t;
    if (u)
        u->vt = &D_001719C0;
    pp[3] = u;
    i = 3;
    do {
        Obj *o = *pp;
        i--;
        pp++;
        o->vt->fn((char *)o + o->vt->delta);
    } while (i >= 0);
}
