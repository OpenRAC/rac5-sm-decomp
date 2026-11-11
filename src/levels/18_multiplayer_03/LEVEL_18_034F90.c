/* LEVEL_18:0x034F90 -- placement copy of LEVEL_16_0366C0.c: calls a helper for indices 0..5, then clears one word field. */
struct S0366C0 {
    char pad0[0x5D0];
    int f5D0;
};

extern void func_034E58(struct S0366C0 *p, unsigned int i);

void func_034F90(struct S0366C0 *p)
{
    unsigned int i;

    for (i = 0; i < 6; i++) {
        func_034E58(p, i);
    }
    p->f5D0 = 0;
}
