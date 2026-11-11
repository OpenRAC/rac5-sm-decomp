/* LEVEL_22:0x0881C0 -- placement copy of LEVEL_01_097500.c: detaches a list head and drains its entries into per-kind pools. */
struct N {
    struct N *p0;
    struct N *p4;
    struct N *p8;
    struct N *pC;
    char pad[2];
    unsigned char kind;
};
extern struct N *D_001EDE50;
extern char D_001EDE5C[];
extern char D_001EDE70[];
extern void func_088EB8(char *pool, struct N *n);
extern void func_089040(char *pool, struct N *n);

void func_0881C0(struct N *h)
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
            n->p4 = D_001EDE50;
            D_001EDE50 = n;
            break;
        case 1:
            func_088EB8(D_001EDE5C, n);
            break;
        case 2:
            func_089040(D_001EDE70, n);
            break;
        }
    }
}
