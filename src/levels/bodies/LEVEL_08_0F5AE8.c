/* LEVEL_08:0x0F5AE8 -- adds a float to strided slots of each record in a chain. */
struct N0F5AE8 {
    char pad0[4];
    struct N0F5AE8 *f04;
    char *f08;
    unsigned short u0C;
    unsigned short u0E;
};

void func_0F5AE8(struct N0F5AE8 *n, char *base, struct N0F5AE8 *end, int stride, int off, float f)
{
    char *e;
    float *p;

    for (;;) {
        e = base + n->u0E * stride;
        if (base != e) {
            p = (float *)(base + off);
            do {
                *p = *p + f;
                base += stride;
                p = (float *)((char *)p + stride);
            } while (base != e);
        }
        n = n->f04;
        if (n == end) {
            return;
        }
        base = n->f08 + n->u0C * stride;
    }
}
