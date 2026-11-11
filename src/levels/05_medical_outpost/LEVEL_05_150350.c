/* LEVEL_05:0x150350 -- placement copy of LEVEL_01_154960.c: packs a config word into two helper calls on a fixed object, then stores their results. */

struct Cfg154960 {
    char pad_00[0x28];
    unsigned int w_28;
};

extern struct Cfg154960 D_00283C80;
extern char D_001F6438[];
extern char D_001F6448[];
extern char D_0037DA58[];
void func_1D1D30(char *a, unsigned int b);
unsigned int func_1D1D48(unsigned int a);
void func_1D25D8(char *a, unsigned int b);
unsigned int func_1D2740(unsigned int a);

void func_150350(void)
{
    struct Cfg154960 *c;
    char *g;
    unsigned int r1;
    unsigned int v;
    unsigned int w;

    c = &D_00283C80;
    v = c->w_28;
    v <<= 16;
    v |= 0x90001040u;
    func_1D1D30(D_001F6438, v);
    r1 = func_1D1D48(v);
    g = D_0037DA58;
    *(unsigned int *)(g + 0x470) = r1;
    w = c->w_28;
    w <<= 16;
    w |= 0x90001044u;
    func_1D25D8(D_001F6448, w);
    *(unsigned int *)(g + 0x474) = func_1D2740(w);
}
