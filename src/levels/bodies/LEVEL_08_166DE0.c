/* LEVEL_08:0x166DE0 -- placement copy of LEVEL_01_154960.c: packs a config word into two helper calls on a fixed object, then stores their results. */

struct Cfg154960 {
    char pad_00[0x28];
    unsigned int w_28;
};

extern struct Cfg154960 D_002E7040;
extern char D_002505A0[];
extern char D_002505B0[];
extern char D_003E0EA8[];
void func_2260E0(char *a, unsigned int b);
unsigned int func_2260F8(unsigned int a);
void func_226988(char *a, unsigned int b);
unsigned int func_226AF0(unsigned int a);

void func_166DE0(void)
{
    struct Cfg154960 *c;
    char *g;
    unsigned int r1;
    unsigned int v;
    unsigned int w;

    c = &D_002E7040;
    v = c->w_28;
    v <<= 16;
    v |= 0x90001040u;
    func_2260E0(D_002505A0, v);
    r1 = func_2260F8(v);
    g = D_003E0EA8;
    *(unsigned int *)(g + 0x470) = r1;
    w = c->w_28;
    w <<= 16;
    w |= 0x90001044u;
    func_226988(D_002505B0, w);
    *(unsigned int *)(g + 0x474) = func_226AF0(w);
}
