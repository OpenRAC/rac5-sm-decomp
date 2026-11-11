/* LEVEL_19:0x183168 -- placement copy of LEVEL_16_1864D0.c: visits each node of a linked list, then clears the list head. */

struct Node1864D0 {
    char pad00[0x6C];
    struct Node1864D0 *p6C;
};

struct E1864D0 {
    char pad00[0x44];
    struct Node1864D0 *p44;
};

extern void func_1830B8(struct E1864D0 *e, struct Node1864D0 *n);

void func_183168(struct E1864D0 *e)
{
    struct Node1864D0 *n;

    n = e->p44;
    while (n != 0) {
        func_1830B8(e, n);
        n = n->p6C;
    }
    e->p44 = 0;
}
