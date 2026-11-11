/* LEVEL_07:0x0994B0 -- placement copy of LEVEL_01_097500.c: detaches a list head and drains its entries into per-kind pools. */
struct N {
    struct N *p0;
    struct N *p4;
    struct N *p8;
    struct N *pC;
    char pad[2];
    unsigned char kind;
};
extern struct N *D_002ADB90;
extern char D_002ADB9C[];
extern char D_002ADBB0[];
extern void func_09A1D8(char *pool, struct N *n);
extern void func_09A360(char *pool, struct N *n);

void func_0994B0(struct N *h)
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
            n->p4 = D_002ADB90;
            D_002ADB90 = n;
            break;
        case 1:
            func_09A1D8(D_002ADB9C, n);
            break;
        case 2:
            func_09A360(D_002ADBB0, n);
            break;
        }
    }
}
