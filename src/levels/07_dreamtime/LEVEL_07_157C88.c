/* LEVEL_07:0x157C88 -- placement copy of LEVEL_01_154960.c: packs a config word into two helper calls on a fixed object, then stores their results. */

struct Cfg154960 {
    char pad_00[0x28];
    unsigned int w_28;
};

extern struct Cfg154960 D_002AD6C0;
extern char D_0021B6C0[];
extern char D_0021B6D0[];
extern char D_003A74A8[];
void func_1F32B0(char *a, unsigned int b);
unsigned int func_1F32C8(unsigned int a);
void func_1F3B58(char *a, unsigned int b);
unsigned int func_1F3CC0(unsigned int a);

void func_157C88(void)
{
    struct Cfg154960 *c;
    char *g;
    unsigned int r1;
    unsigned int v;
    unsigned int w;

    c = &D_002AD6C0;
    v = c->w_28;
    v <<= 16;
    v |= 0x90001040u;
    func_1F32B0(D_0021B6C0, v);
    r1 = func_1F32C8(v);
    g = D_003A74A8;
    *(unsigned int *)(g + 0x470) = r1;
    w = c->w_28;
    w <<= 16;
    w |= 0x90001044u;
    func_1F3B58(D_0021B6D0, w);
    *(unsigned int *)(g + 0x474) = func_1F3CC0(w);
}
