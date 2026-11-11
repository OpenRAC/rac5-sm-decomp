/* LEVEL_09:0x14D940 -- placement copy of LEVEL_01_154960.c: packs a config word into two helper calls on a fixed object, then stores their results. */

struct Cfg154960 {
    char pad_00[0x28];
    unsigned int w_28;
};

extern struct Cfg154960 D_0027F540;
extern char D_001F0EB8[];
extern char D_001F0EC8[];
extern char D_00379318[];
void func_1CB0A0(char *a, unsigned int b);
unsigned int func_1CB0B8(unsigned int a);
void func_1CB948(char *a, unsigned int b);
unsigned int func_1CBAB0(unsigned int a);

void func_14D940(void)
{
    struct Cfg154960 *c;
    char *g;
    unsigned int r1;
    unsigned int v;
    unsigned int w;

    c = &D_0027F540;
    v = c->w_28;
    v <<= 16;
    v |= 0x90001040u;
    func_1CB0A0(D_001F0EB8, v);
    r1 = func_1CB0B8(v);
    g = D_00379318;
    *(unsigned int *)(g + 0x470) = r1;
    w = c->w_28;
    w <<= 16;
    w |= 0x90001044u;
    func_1CB948(D_001F0EC8, w);
    *(unsigned int *)(g + 0x474) = func_1CBAB0(w);
}
