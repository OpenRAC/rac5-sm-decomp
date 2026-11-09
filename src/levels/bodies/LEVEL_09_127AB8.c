/* LEVEL_09:0x127AB8 -- placement copy of LEVEL_01_12EB20.c: copies three halfword fields into packed global words, then stores a helper result. */

struct Src12EB20 {
    char pad_00[0x4];
    unsigned int w_04;
    char pad_08[0x74];
    unsigned int w_7C;
    char pad_80[0xCC];
    unsigned int w_14C;
};

extern unsigned int D_001F09E0;
extern unsigned int D_001F09E4;
extern unsigned int D_001F09E8;
extern unsigned int D_001F09EC;
extern struct Src12EB20 D_0027F540;
unsigned int func_0DA330(int a, int b, int c, int d);

void func_127AB8(void)
{
    struct Src12EB20 *s;
    unsigned int a0;
    unsigned int v1;
    unsigned int a2;
    unsigned int a3;
    unsigned int t1;
    unsigned int t0;

    s = &D_0027F540;
    a0 = s->w_7C;
    v1 = s->w_04;
    a2 = D_001F09E4;
    a3 = D_001F09E8;
    t1 = s->w_14C;
    t0 = D_001F09EC;
    D_001F09E4 = (a2 & 0xF800FFFF) | (a0 << 16);
    D_001F09E8 = (a3 & 0xF800FFFF) | (v1 << 16);
    D_001F09EC = (t0 & 0xF800FFFF) | (t1 << 16);
    D_001F09E0 = func_0DA330(0, 7, 1, 0);
}
