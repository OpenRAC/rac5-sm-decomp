/* LEVEL_03:0x1BB9B8 -- placement copy of LEVEL_01_1AA108.c: creates the module's effect handle and mask word, then resolves four hashed resources into their global slots. */
typedef struct {
    char pad00[0x94];
    unsigned int f94;
    char pad98[0x64];
    int fFC;
} Cfg;

extern Cfg D_002B2C40;
extern int D_00221BDC;
extern unsigned int D_00221C1C;
extern int D_00221C18;
extern int D_003B33A8;
extern int D_003B33AC;
extern int D_003B33B0;
extern int D_003B33B4;

extern int func_0EB978(int a, int b, int c, int d, int e, int f, int g);
extern int func_0E55B8(int a, int b, int c);
extern int func_1282D0(unsigned int key);

void func_1BB9B8(void)
{
    int *h = &D_00221BDC;
    int *g = &D_00221C18;

    *h = func_0EB978(10, D_002B2C40.fFC, 0, 0, 1, 0, 1);
    D_00221C1C = (D_00221C1C & 0xF800FFFF) | (D_002B2C40.f94 << 16);
    *g = func_0E55B8(0x10, 1, 0x25);
    D_003B33AC = func_1282D0(0x650F1BD8);
    D_003B33A8 = func_1282D0(0x0249FA02);
    D_003B33B0 = func_1282D0(0x84A0DEC0);
    D_003B33B4 = func_1282D0(0x3D3F1EE6);
}
