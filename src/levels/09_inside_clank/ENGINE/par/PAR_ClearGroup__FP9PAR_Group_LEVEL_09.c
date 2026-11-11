/* LEVEL_09:0x093D80 -- placement copy of LEVEL_01_097500.c: detaches a list head and drains its entries into per-kind pools. */
struct N {
    struct N *p0;
    struct N *p4;
    struct N *p8;
    struct N *pC;
    char pad[2];
    unsigned char kind;
};
extern struct N *D_0027FA10;
extern char D_0027FA1C[];
extern char D_0027FA30[];
extern void func_094AA8(char *pool, struct N *n);
extern void func_094C30(char *pool, struct N *n);

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
            n->p4 = D_0027FA10;
            D_0027FA10 = n;
            break;
        case 1:
            func_094AA8(D_0027FA1C, n);
            break;
        case 2:
            func_094C30(D_0027FA30, n);
            break;
        }
    }
}
