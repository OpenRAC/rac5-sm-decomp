/* LEVEL_02:0x1611D8 -- runs a two-step helper on two addresses derived from one field. */
struct S1611D8 {
    char pad0[0x58];
    char *f58;
};

extern void func_12C1D8(char *a, struct S1611D8 *b, char *c);

void func_1611D8(struct S1611D8 *p)
{
    char *q;

    q = p->f58;
    func_12C1D8(q + 0x48, p, q + 0x48);
    func_12C1D8(q + 0x54, p, q + 0x54);
}
