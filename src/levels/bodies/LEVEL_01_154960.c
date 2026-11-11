/* LEVEL_01:0x154960 -- packs a config word into two helper calls on a fixed object, then stores their results. */

struct Cfg154960 {
    char pad_00[0x28];
    unsigned int w_28;
};

extern struct Cfg154960 D_00297DC0;
extern char D_002073B8[];
extern char D_002073C8[];
extern char D_00391B98[];
void func_1E2938(char *a, unsigned int b);
unsigned int func_1E2950(unsigned int a);
void func_1E31E0(char *a, unsigned int b);
unsigned int func_1E3348(unsigned int a);

void func_154960(void)
{
    struct Cfg154960 *c;
    char *g;
    unsigned int r1;
    unsigned int v;
    unsigned int w;

    c = &D_00297DC0;
    v = c->w_28;
    v <<= 16;
    v |= 0x90001040u;
    func_1E2938(D_002073B8, v);
    r1 = func_1E2950(v);
    g = D_00391B98;
    *(unsigned int *)(g + 0x470) = r1;
    w = c->w_28;
    w <<= 16;
    w |= 0x90001044u;
    func_1E31E0(D_002073C8, w);
    *(unsigned int *)(g + 0x474) = func_1E3348(w);
}
