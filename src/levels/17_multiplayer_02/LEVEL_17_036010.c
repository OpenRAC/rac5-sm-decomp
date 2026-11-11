/* LEVEL_17:0x036010 -- placement copy of LEVEL_16_0366C0.c: calls a helper for indices 0..5, then clears one word field. */
struct S0366C0 {
    char pad0[0x5D0];
    int f5D0;
};

extern void func_035ED8(struct S0366C0 *p, unsigned int i);

void func_036010(struct S0366C0 *p)
{
    unsigned int i;

    for (i = 0; i < 6; i++) {
        func_035ED8(p, i);
    }
    p->f5D0 = 0;
}
