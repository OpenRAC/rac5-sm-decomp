/* LEVEL_08:0x211878 -- placement copy of LEVEL_03_1E2520.c: calls a per-record helper once for each record of a counted array. */

struct Rec1E2520 {
    char pad[128];
};

struct E1E2520 {
    char pad00[4];
    struct Rec1E2520 *p4;
    int n8;
};

extern void func_2114A8(struct Rec1E2520 *r);

void func_211878(struct E1E2520 *e)
{
    int i;
    int n;

    n = e->n8;
    for (i = 0; i != n; i++) {
        func_2114A8(&e->p4[i]);
    }
}
