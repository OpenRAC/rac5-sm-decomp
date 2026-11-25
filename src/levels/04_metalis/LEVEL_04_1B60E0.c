/* LEVEL_04:0x1B60E0 -- placement copy of LEVEL_01_1AA108.c: creates the module's effect handle and mask word, then resolves four hashed resources into their global slots. */
typedef struct {
    char pad00[0x94];
    unsigned int f94;
    char pad98[0x64];
    int fFC;
} Cfg;

extern Cfg D_002B25C0;
extern int D_00222334;
extern unsigned int D_00222374;
extern int D_00222370;
extern int D_003B3128;
extern int D_003B312C;
extern int D_003B3130;
extern int D_003B3134;

extern int func_0F28E0(int a, int b, int c, int d, int e, int f, int g);
extern int func_0EB090(int a, int b, int c);
extern int func_1364E8(unsigned int key);

void func_1B60E0(void)
{
    int *h = &D_00222334;
    int *g = &D_00222370;

    *h = func_0F28E0(10, D_002B25C0.fFC, 0, 0, 1, 0, 1);
    D_00222374 = (D_00222374 & 0xF800FFFF) | (D_002B25C0.f94 << 16);
    *g = func_0EB090(0x10, 1, 0x25);
    D_003B312C = func_1364E8(0x650F1BD8);
    D_003B3128 = func_1364E8(0x0249FA02);
    D_003B3130 = func_1364E8(0x84A0DEC0);
    D_003B3134 = func_1364E8(0x3D3F1EE6);
}
