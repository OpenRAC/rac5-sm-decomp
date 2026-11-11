/* LEVEL_24:0x14AEB0 -- placement copy of LEVEL_01_154960.c: packs a config word into two helper calls on a fixed object, then stores their results. */

struct Cfg154960 {
    char pad_00[0x28];
    unsigned int w_28;
};

extern struct Cfg154960 D_00263C80;
extern char D_001D8360[];
extern char D_001D8370[];
extern char D_0035DA28[];
void func_1B4188(char *a, unsigned int b);
unsigned int func_1B41A0(unsigned int a);
void func_1B4A30(char *a, unsigned int b);
unsigned int func_1B4B98(unsigned int a);

void func_14AEB0(void)
{
    struct Cfg154960 *c;
    char *g;
    unsigned int r1;
    unsigned int v;
    unsigned int w;

    c = &D_00263C80;
    v = c->w_28;
    v <<= 16;
    v |= 0x90001040u;
    func_1B4188(D_001D8360, v);
    r1 = func_1B41A0(v);
    g = D_0035DA28;
    *(unsigned int *)(g + 0x470) = r1;
    w = c->w_28;
    w <<= 16;
    w |= 0x90001044u;
    func_1B4A30(D_001D8370, w);
    *(unsigned int *)(g + 0x474) = func_1B4B98(w);
}
