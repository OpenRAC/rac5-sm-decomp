/* LEVEL_05:0x094B60 -- placement copy of LEVEL_01_097500.c: detaches a list head and drains its entries into per-kind pools. */
struct N {
    struct N *p0;
    struct N *p4;
    struct N *p8;
    struct N *pC;
    char pad[2];
    unsigned char kind;
};
extern struct N *D_00284150;
extern char D_0028415C[];
extern char D_00284170[];
extern void func_095858(char *pool, struct N *n);
extern void func_0959E0(char *pool, struct N *n);

void func_094B60(struct N *h)
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
            n->p4 = D_00284150;
            D_00284150 = n;
            break;
        case 1:
            func_095858(D_0028415C, n);
            break;
        case 2:
            func_0959E0(D_00284170, n);
            break;
        }
    }
}
