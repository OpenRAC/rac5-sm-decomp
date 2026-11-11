/* LEVEL_16:0x163950 -- walks a linked chain from a global head, OR-ing the nonzero helper results. */
struct Node2 {
    int w0;
    char pad4[0x58 - 4];
    int *p58;
};

extern struct Node2 *D_001BDFA4;
int func_163A48(struct Node2 *n, void *a);

int func_163950(void *a0)
{
    struct Node2 *n;
    int result;
    int v;
    int *t;

    result = 0;
    n = D_001BDFA4;
    if (n != 0) {
        do {
            v = func_163A48(n, a0);
            t = n->p58;
            result |= (v != 0);
            n = (struct Node2 *)*t;
        } while (n != 0);
    }
    return result;
}
