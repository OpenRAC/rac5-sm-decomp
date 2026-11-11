/* LEVEL_23:0x13AE40 -- placement copy of LEVEL_22_113A88.c: queues a nearby object into a 32-entry list. */
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
extern P D_002025C0;
extern L D_00363098;
extern void func_077FF8(void *o, const char *s, int n);
extern const char D_0013C440[];

void func_13AE40(Q *q)
{
    P *a;
    C *c;
    L *l;
    float dx, dy, dz, d;
    float *pa;
    float *pb;

    a = &D_002025C0;
    c = q->c58;
    if (a && c) {
        l = &D_00363098;
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
                    func_077FF8(q, D_0013C440, 1);
                l->count++;
            }
        }
    }
}
