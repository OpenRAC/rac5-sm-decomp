/* LEVEL_01:0x18F550 -- counts down a record counter when a helper returns one, then calls a helper with a byte field. */
struct Q18F550 {
    char pad0[0x4A0];
    int f4A0;
};

struct P18F550 {
    char pad0[0x45];
    unsigned char b45;
    char pad46[0x58 - 0x46];
    struct Q18F550 *f58;
};

extern int func_18EFC0(struct P18F550 *p);
extern void func_18EBB0(struct P18F550 *p, int a, int b);

void func_18F550(struct P18F550 *p)
{
    struct Q18F550 *q;
    int r;

    q = p->f58;
    r = func_18EFC0(p);
    if (r == 1) {
        q->f4A0 = q->f4A0 - 1;
        if (q->f4A0 == 0) {
            func_18EBB0(p, p->b45, 2);
        }
    } else {
        func_18EBB0(p, p->b45, r & 0xFF);
    }
}
