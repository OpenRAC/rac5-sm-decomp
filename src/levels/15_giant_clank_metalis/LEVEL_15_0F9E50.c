/* LEVEL_15:0x0F9E50 -- walks the global list calling a helper on each node, then clears the list head. */

void func_0F9CC8(void *a0, void *a1);

struct Node {
    unsigned char pad00[0x5C];
    void *p5C;
    unsigned char pad60[0x14];
    struct Node *p74;
};

extern struct Node *D_002ECCF0;

void func_0F9E50(void)
{
    struct Node *n;
    struct Node *nx;

    n = D_002ECCF0;
    while (n != 0) {
        nx = n->p74;
        func_0F9CC8(n->p5C, n);
        n = nx;
    }
    D_002ECCF0 = 0;
}
