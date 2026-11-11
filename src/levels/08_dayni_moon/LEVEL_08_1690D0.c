/* LEVEL_08:0x1690D0 -- placement copy of LEVEL_02_1611D8.c: runs a two-step helper on two addresses derived from one field. */
struct S1611D8 {
    char pad0[0x58];
    char *f58;
};

extern void func_137108(char *a, struct S1611D8 *b, char *c);

void func_1690D0(struct S1611D8 *p)
{
    char *q;

    q = p->f58;
    func_137108(q + 0x48, p, q + 0x48);
    func_137108(q + 0x54, p, q + 0x54);
}
