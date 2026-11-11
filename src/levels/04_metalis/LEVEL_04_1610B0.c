/* LEVEL_04:0x1610B0 -- placement copy of LEVEL_01_154960.c: packs a config word into two helper calls on a fixed object, then stores their results. */

struct Cfg154960 {
    char pad_00[0x28];
    unsigned int w_28;
};

extern struct Cfg154960 D_002B25C0;
extern char D_00220AF8[];
extern char D_00220B08[];
extern char D_003AC358[];
void func_1FAAD8(char *a, unsigned int b);
unsigned int func_1FAAF0(unsigned int a);
void func_1FB380(char *a, unsigned int b);
unsigned int func_1FB4E8(unsigned int a);

void func_1610B0(void)
{
    struct Cfg154960 *c;
    char *g;
    unsigned int r1;
    unsigned int v;
    unsigned int w;

    c = &D_002B25C0;
    v = c->w_28;
    v <<= 16;
    v |= 0x90001040u;
    func_1FAAD8(D_00220AF8, v);
    r1 = func_1FAAF0(v);
    g = D_003AC358;
    *(unsigned int *)(g + 0x470) = r1;
    w = c->w_28;
    w <<= 16;
    w |= 0x90001044u;
    func_1FB380(D_00220B08, w);
    *(unsigned int *)(g + 0x474) = func_1FB4E8(w);
}
