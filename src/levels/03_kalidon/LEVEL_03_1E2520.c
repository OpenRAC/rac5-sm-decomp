/* LEVEL_03:0x1E2520 -- calls a per-record helper once for each record of a counted array. */

struct Rec1E2520 {
    char pad[128];
};

struct E1E2520 {
    char pad00[4];
    struct Rec1E2520 *p4;
    int n8;
};

extern void func_1E2150(struct Rec1E2520 *r);

void func_1E2520(struct E1E2520 *e)
{
    int i;
    int n;

    n = e->n8;
    for (i = 0; i != n; i++) {
        func_1E2150(&e->p4[i]);
    }
}
