/* LEVEL_02:0x1C80F0 -- placement copy of LEVEL_01_1AA108.c: creates the module's effect handle and mask word, then resolves four hashed resources into their global slots. */
typedef struct {
    char pad00[0x94];
    unsigned int f94;
    char pad98[0x64];
    int fFC;
} Cfg;

extern Cfg D_002AF2C0;
extern int D_0021DC94;
extern unsigned int D_0021DCD4;
extern int D_0021DCD0;
extern int D_003B0190;
extern int D_003B0194;
extern int D_003B0198;
extern int D_003B019C;

extern int func_0F3290(int a, int b, int c, int d, int e, int f, int g);
extern int func_0EC160(int a, int b, int c);
extern int func_130418(unsigned int key);

void func_1C80F0(void)
{
    int *h = &D_0021DC94;
    int *g = &D_0021DCD0;

    *h = func_0F3290(10, D_002AF2C0.fFC, 0, 0, 1, 0, 1);
    D_0021DCD4 = (D_0021DCD4 & 0xF800FFFF) | (D_002AF2C0.f94 << 16);
    *g = func_0EC160(0x10, 1, 0x25);
    D_003B0194 = func_130418(0x650F1BD8);
    D_003B0190 = func_130418(0x0249FA02);
    D_003B0198 = func_130418(0x84A0DEC0);
    D_003B019C = func_130418(0x3D3F1EE6);
}
