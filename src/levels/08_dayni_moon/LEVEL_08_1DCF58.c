/* LEVEL_08:0x1DCF58 -- placement copy of LEVEL_01_1AA108.c: creates the module's effect handle and mask word, then resolves four hashed resources into their global slots. */
typedef struct {
    char pad00[0x94];
    unsigned int f94;
    char pad98[0x64];
    int fFC;
} Cfg;

extern Cfg D_002E7040;
extern int D_002523AC;
extern unsigned int D_002523EC;
extern int D_002523E8;
extern int D_003EA210;
extern int D_003EA214;
extern int D_003EA218;
extern int D_003EA21C;

extern int func_0F6DD8(int a, int b, int c, int d, int e, int f, int g);
extern int func_0F07A0(int a, int b, int c);
extern int func_13B5A0(unsigned int key);

void func_1DCF58(void)
{
    int *h = &D_002523AC;
    int *g = &D_002523E8;

    *h = func_0F6DD8(10, D_002E7040.fFC, 0, 0, 1, 0, 1);
    D_002523EC = (D_002523EC & 0xF800FFFF) | (D_002E7040.f94 << 16);
    *g = func_0F07A0(0x10, 1, 0x25);
    D_003EA214 = func_13B5A0(0x650F1BD8);
    D_003EA210 = func_13B5A0(0x0249FA02);
    D_003EA218 = func_13B5A0(0x84A0DEC0);
    D_003EA21C = func_13B5A0(0x3D3F1EE6);
}
