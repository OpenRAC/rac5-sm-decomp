/* LEVEL_06:0x14B058 -- placement copy of LEVEL_01_154960.c: packs a config word into two helper calls on a fixed object, then stores their results. */

struct Cfg154960 {
    char pad_00[0x28];
    unsigned int w_28;
};

extern struct Cfg154960 D_00284B40;
extern char D_001F5FB8[];
extern char D_001F5FC8[];
extern char D_0037E918[];
void func_1D0180(char *a, unsigned int b);
unsigned int func_1D0198(unsigned int a);
void func_1D0A28(char *a, unsigned int b);
unsigned int func_1D0B90(unsigned int a);

void func_14B058(void)
{
    struct Cfg154960 *c;
    char *g;
    unsigned int r1;
    unsigned int v;
    unsigned int w;

    c = &D_00284B40;
    v = c->w_28;
    v <<= 16;
    v |= 0x90001040u;
    func_1D0180(D_001F5FB8, v);
    r1 = func_1D0198(v);
    g = D_0037E918;
    *(unsigned int *)(g + 0x470) = r1;
    w = c->w_28;
    w <<= 16;
    w |= 0x90001044u;
    func_1D0A28(D_001F5FC8, w);
    *(unsigned int *)(g + 0x474) = func_1D0B90(w);
}
