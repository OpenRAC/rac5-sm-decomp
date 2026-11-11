/* LEVEL_10:0x097998 -- placement copy of LEVEL_01_097500.c: detaches a list head and drains its entries into per-kind pools. */
struct N {
    struct N *p0;
    struct N *p4;
    struct N *p8;
    struct N *pC;
    char pad[2];
    unsigned char kind;
};
extern struct N *D_002A1690;
extern char D_002A169C[];
extern char D_002A16B0[];
extern void func_0986C0(char *pool, struct N *n);
extern void func_098848(char *pool, struct N *n);

void func_097998(struct N *h)
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
            n->p4 = D_002A1690;
            D_002A1690 = n;
            break;
        case 1:
            func_0986C0(D_002A169C, n);
            break;
        case 2:
            func_098848(D_002A16B0, n);
            break;
        }
    }
}
