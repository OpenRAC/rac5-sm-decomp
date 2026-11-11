/* LEVEL_04:0x13AFA0 -- placement copy of LEVEL_01_12EB20.c: copies three halfword fields into packed global words, then stores a helper result. */

struct Src12EB20 {
    char pad_00[0x4];
    unsigned int w_04;
    char pad_08[0x74];
    unsigned int w_7C;
    char pad_80[0xCC];
    unsigned int w_14C;
};

extern unsigned int D_00220300;
extern unsigned int D_00220304;
extern unsigned int D_00220308;
extern unsigned int D_0022030C;
extern struct Src12EB20 D_002B25C0;
unsigned int func_0E2940(int a, int b, int c, int d);

void func_13AFA0(void)
{
    struct Src12EB20 *s;
    unsigned int a0;
    unsigned int v1;
    unsigned int a2;
    unsigned int a3;
    unsigned int t1;
    unsigned int t0;

    s = &D_002B25C0;
    a0 = s->w_7C;
    v1 = s->w_04;
    a2 = D_00220304;
    a3 = D_00220308;
    t1 = s->w_14C;
    t0 = D_0022030C;
    D_00220304 = (a2 & 0xF800FFFF) | (a0 << 16);
    D_00220308 = (a3 & 0xF800FFFF) | (v1 << 16);
    D_0022030C = (t0 & 0xF800FFFF) | (t1 << 16);
    D_00220300 = func_0E2940(0, 7, 1, 0);
}
