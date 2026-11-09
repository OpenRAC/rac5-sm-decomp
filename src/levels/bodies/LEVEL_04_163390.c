/* LEVEL_04:0x163390 -- placement copy of LEVEL_02_1611D8.c: runs a two-step helper on two addresses derived from one field. */
struct S1611D8 {
    char pad0[0x58];
    char *f58;
};

extern void func_132058(char *a, struct S1611D8 *b, char *c);

void func_163390(struct S1611D8 *p)
{
    char *q;

    q = p->f58;
    func_132058(q + 0x48, p, q + 0x48);
    func_132058(q + 0x54, p, q + 0x54);
}
