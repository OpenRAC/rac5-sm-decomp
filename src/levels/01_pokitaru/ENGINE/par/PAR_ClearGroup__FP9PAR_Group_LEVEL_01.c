/* LEVEL_01:0x097500 -- detaches a list head and drains its entries into per-kind pools. */
struct N {
    struct N *p0;
    struct N *p4;
    struct N *p8;
    struct N *pC;
    char pad[2];
    unsigned char kind;
};
extern struct N *D_00298290;
extern char D_0029829C[];
extern char D_002982B0[];
extern void func_0981F8(char *pool, struct N *n);
extern void func_098380(char *pool, struct N *n);

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
            n->p4 = D_00298290;
            D_00298290 = n;
            break;
        case 1:
            func_0981F8(D_0029829C, n);
            break;
        case 2:
            func_098380(D_002982B0, n);
            break;
        }
    }
}
