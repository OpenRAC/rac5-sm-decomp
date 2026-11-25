/* LEVEL_23:0x1899A8 -- placement copy of LEVEL_01_1AA108.c: creates the module's effect handle and mask word, then resolves four hashed resources into their global slots. */
typedef struct {
    char pad00[0x94];
    unsigned int f94;
    char pad98[0x64];
    int fFC;
} Cfg;

extern Cfg D_00269200;
extern int D_001DC054;
extern unsigned int D_001DC094;
extern int D_001DC090;
extern int D_00366300;
extern int D_00366304;
extern int D_00366308;
extern int D_0036630C;

extern int func_0DFFC8(int a, int b, int c, int d, int e, int f, int g);
extern int func_0D9FE8(int a, int b, int c);
extern int func_11AEE0(unsigned int key);

void func_1899A8(void)
{
    int *h = &D_001DC054;
    int *g = &D_001DC090;

    *h = func_0DFFC8(10, D_00269200.fFC, 0, 0, 1, 0, 1);
    D_001DC094 = (D_001DC094 & 0xF800FFFF) | (D_00269200.f94 << 16);
    *g = func_0D9FE8(0x10, 1, 0x25);
    D_00366304 = func_11AEE0(0x650F1BD8);
    D_00366300 = func_11AEE0(0x0249FA02);
    D_00366308 = func_11AEE0(0x84A0DEC0);
    D_0036630C = func_11AEE0(0x3D3F1EE6);
}
