/* LEVEL_19:0x088520 -- placement copy of LEVEL_01_097500.c: detaches a list head and drains its entries into per-kind pools. */
struct N {
    struct N *p0;
    struct N *p4;
    struct N *p8;
    struct N *pC;
    char pad[2];
    unsigned char kind;
};
extern struct N *D_0024E850;
extern char D_0024E85C[];
extern char D_0024E870[];
extern void func_089218(char *pool, struct N *n);
extern void func_0893A0(char *pool, struct N *n);

void func_088520(struct N *h)
{
    struct N *n;
    unsigned char kind;

    if (h->p4 == h)
        return;
    h->p8->pC = h->pC;
    h->pC->p8 = h->p8;
    h->p8 = h;
    h->pC = h;
    kind = h->kind;
    while (h->p4 != h) {
        n = h->p4;
        n->p0->p4 = n->p4;
        n->p4->p0 = n->p0;
        switch (kind) {
        case 0:
            n->p4 = D_0024E850;
            D_0024E850 = n;
            break;
        case 1:
            func_089218(D_0024E85C, n);
            break;
        case 2:
            func_0893A0(D_0024E870, n);
            break;
        }
    }
}
