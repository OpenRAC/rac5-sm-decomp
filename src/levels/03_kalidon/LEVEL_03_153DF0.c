/* LEVEL_03:0x153DF0 -- placement copy of LEVEL_01_154960.c: packs a config word into two helper calls on a fixed object, then stores their results. */

struct Cfg154960 {
    char pad_00[0x28];
    unsigned int w_28;
};

extern struct Cfg154960 D_002B2C40;
extern char D_0021FA58[];
extern char D_0021FA68[];
extern char D_003ACA68[];
void func_1F98C8(char *a, unsigned int b);
unsigned int func_1F98E0(unsigned int a);
void func_1FA170(char *a, unsigned int b);
unsigned int func_1FA2D8(unsigned int a);

void func_153DF0(void)
{
    struct Cfg154960 *c;
    char *g;
    unsigned int r1;
    unsigned int v;
    unsigned int w;

    c = &D_002B2C40;
    v = c->w_28;
    v <<= 16;
    v |= 0x90001040u;
    func_1F98C8(D_0021FA58, v);
    r1 = func_1F98E0(v);
    g = D_003ACA68;
    *(unsigned int *)(g + 0x470) = r1;
    w = c->w_28;
    w <<= 16;
    w |= 0x90001044u;
    func_1FA170(D_0021FA68, w);
    *(unsigned int *)(g + 0x474) = func_1FA2D8(w);
}
