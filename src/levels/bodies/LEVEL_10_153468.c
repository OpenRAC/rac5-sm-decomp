/* LEVEL_10:0x153468 -- placement copy of LEVEL_01_154960.c: packs a config word into two helper calls on a fixed object, then stores their results. */

struct Cfg154960 {
    char pad_00[0x28];
    unsigned int w_28;
};

extern struct Cfg154960 D_002A11C0;
extern char D_00210030[];
extern char D_00210040[];
extern char D_0039AF98[];
void func_1EA290(char *a, unsigned int b);
unsigned int func_1EA2A8(unsigned int a);
void func_1EAB38(char *a, unsigned int b);
unsigned int func_1EACA0(unsigned int a);

void func_153468(void)
{
    struct Cfg154960 *c;
    char *g;
    unsigned int r1;
    unsigned int v;
    unsigned int w;

    c = &D_002A11C0;
    v = c->w_28;
    v <<= 16;
    v |= 0x90001040u;
    func_1EA290(D_00210030, v);
    r1 = func_1EA2A8(v);
    g = D_0039AF98;
    *(unsigned int *)(g + 0x470) = r1;
    w = c->w_28;
    w <<= 16;
    w |= 0x90001044u;
    func_1EAB38(D_00210040, w);
    *(unsigned int *)(g + 0x474) = func_1EACA0(w);
}
