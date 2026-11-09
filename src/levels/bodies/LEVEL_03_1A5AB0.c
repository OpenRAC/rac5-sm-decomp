/* LEVEL_03:0x1A5AB0 -- stores three words into a linked record, clears two flag bits, calls a helper. */
struct Q1A5AB0 {
    char pad0[0x0C];
    int f0C;
    int f10;
    char pad14[0x2C];
    int f40;
};

struct P1A5AB0 {
    char pad0[0x46];
    unsigned char b46;
    char pad47[0x0D];
    struct Q1A5AB0 *f54;
    char pad58[0x0C];
    int f64;
};

extern void func_1A4B98(struct P1A5AB0 *p, int x);

void func_1A5AB0(struct P1A5AB0 *p, int a1, int a2, int a3)
{
    struct Q1A5AB0 *q;
    int flags;

    q = p->f54;
    q->f10 = a2;
    q->f40 = a1;
    q->f0C = a3;
    flags = p->f64;
    flags &= ~0x20;
    flags &= ~0x10;
    p->f64 = flags;
    func_1A4B98(p, 1);
    p->b46 = 0;
}
