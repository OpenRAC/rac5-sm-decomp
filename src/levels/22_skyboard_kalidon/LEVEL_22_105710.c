/* LEVEL_22:0x105710 -- placement copy of LEVEL_01_12EB20.c: copies three halfword fields into packed global words, then stores a helper result. */

struct Src12EB20 {
    char pad_00[0x4];
    unsigned int w_04;
    char pad_08[0x74];
    unsigned int w_7C;
    char pad_80[0xCC];
    unsigned int w_14C;
};

extern unsigned int D_00165EC0;
extern unsigned int D_00165EC4;
extern unsigned int D_00165EC8;
extern unsigned int D_00165ECC;
extern struct Src12EB20 D_001ED980;
unsigned int func_0CAE28(int a, int b, int c, int d);

void func_105710(void)
{
    struct Src12EB20 *s;
    unsigned int a0;
    unsigned int v1;
    unsigned int a2;
    unsigned int a3;
    unsigned int t1;
    unsigned int t0;

    s = &D_001ED980;
    a0 = s->w_7C;
    v1 = s->w_04;
    a2 = D_00165EC4;
    a3 = D_00165EC8;
    t1 = s->w_14C;
    t0 = D_00165ECC;
    D_00165EC4 = (a2 & 0xF800FFFF) | (a0 << 16);
    D_00165EC8 = (a3 & 0xF800FFFF) | (v1 << 16);
    D_00165ECC = (t0 & 0xF800FFFF) | (t1 << 16);
    D_00165EC0 = func_0CAE28(0, 7, 1, 0);
}
