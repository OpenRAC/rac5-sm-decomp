/* LEVEL_22:0x113A88 -- queues a nearby object into a 32-entry list. */
typedef struct {
    char pad0[0x30];
    float p[3];
} P;
typedef struct {
    char pad0[0x118];
    float d118;
} C;
typedef struct {
    char pad0[0x58];
    C *c58;
    char pad5C[0x30 - 0x5C + 0x30];
} Q;
typedef struct {
    P *list[32];
    int count;
} L;
extern P D_00186D40;
extern L D_002E7480;
extern void func_073620(void *o, const char *s, int n);
extern const char D_00115088[];

void func_113A88(Q *q)
{
    P *a;
    C *c;
    L *l;
    float dx, dy, dz, d;
    float *pa;
    float *pb;

    a = &D_00186D40;
    c = q->c58;
    if (a && c) {
        l = &D_002E7480;
        if (l->count < 32) {
            pb = a->p;
            pa = (float *)((char *)q + 0x30);
            dx = pa[0] - pb[0];
            dy = pa[1] - pb[1];
            dz = pa[2] - pb[2];
            d = dx * dx + dy * dy + dz * dz;
            c->d118 = d;
            if (!(16384.0f < d)) {
                l->list[l->count] = (P *)q;
                if (l->count <= 0)
                    func_073620(q, D_00115088, 1);
                l->count++;
            }
        }
    }
}
