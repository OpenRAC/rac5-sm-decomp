/* LEVEL_01:0x16F100 -- sets and clears flag bits on up to twelve record pointers taken from a table. */
struct X16F100 {
    char pad0[0x64];
    int f64;
};

struct E16F100 {
    struct X16F100 *f00;
    char pad04[0x18];
};

struct P16F100 {
    char pad0[0x45];
    unsigned char b45;
    char pad46[0x12];
    struct E16F100 *f58;
    char pad5C[0x14];
    int f70;
};

void func_16F100(struct P16F100 *p)
{
    struct E16F100 *e;
    struct X16F100 *x;
    unsigned int n;
    int t;

    e = p->f58;
    p->f70 = 0;
    p->b45 = 2;
    n = 0;
    do {
        x = e->f00;
        n++;
        if (x != 0) {
            t = x->f64;
            t &= ~0x20;
            t |= 0x20;
            x->f64 = t;
            x = e->f00;
            t = x->f64;
            t &= ~0x40;
            x->f64 = t;
        }
        e++;
    } while (n < 12);
}
