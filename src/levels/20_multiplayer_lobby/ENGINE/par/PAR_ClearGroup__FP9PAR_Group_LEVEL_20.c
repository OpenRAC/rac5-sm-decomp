/* LEVEL_20:0x075810 -- placement copy of LEVEL_01_097500.c: detaches a list head and drains its entries into per-kind pools. */
struct N {
    struct N *p0;
    struct N *p4;
    struct N *p8;
    struct N *pC;
    char pad[2];
    unsigned char kind;
};
extern struct N *D_00171F10;
extern char D_00171F1C[];
extern char D_00171F30[];
extern void func_076508(char *pool, struct N *n);
extern void func_076690(char *pool, struct N *n);

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
            n->p4 = D_00171F10;
            D_00171F10 = n;
            break;
        case 1:
            func_076508(D_00171F1C, n);
            break;
        case 2:
            func_076690(D_00171F30, n);
            break;
        }
    }
}
