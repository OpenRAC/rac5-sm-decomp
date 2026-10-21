/* FRONTEND:0x015F20 -- clears one slot of the ring buffer and advances it. */
struct rec {
    char pad[0x60];
    int f60;
    int f64;
    int f68;
};

void *memset(void *, int, int);

int func_015F20(struct rec *p)
{
    if (p->f60 == p->f64)
        return 0;

    memset((char *)p + p->f64 * 12, 0, 12);
    p->f64 = p->f64 + 1;
    if (p->f64 == 8)
        p->f64 = 0;
    p->f68--;
    return 1;
}
