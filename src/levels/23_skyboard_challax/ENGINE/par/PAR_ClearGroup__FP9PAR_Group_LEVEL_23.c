/* LEVEL_23:0x08CE88 -- placement copy of LEVEL_01_097500.c: detaches a list head and drains its entries into per-kind pools. */
struct N {
    struct N *p0;
    struct N *p4;
    struct N *p8;
    struct N *pC;
    char pad[2];
    unsigned char kind;
};
extern struct N *D_002696D0;
extern char D_002696DC[];
extern char D_002696F0[];
extern void func_08DB80(char *pool, struct N *n);
extern void func_08DD08(char *pool, struct N *n);

void PAR_ClearGroup__FP9PAR_Group(struct N *h)
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
            n->p4 = D_002696D0;
            D_002696D0 = n;
            break;
        case 1:
            func_08DB80(D_002696DC, n);
            break;
        case 2:
            func_08DD08(D_002696F0, n);
            break;
        }
    }
}
