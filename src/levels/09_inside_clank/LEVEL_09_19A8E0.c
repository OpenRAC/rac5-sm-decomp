/* LEVEL_09:0x19A8E0 -- placement copy of LEVEL_01_1AA108.c: creates the module's effect handle and mask word, then resolves four hashed resources into their global slots. */
typedef struct {
    char pad00[0x94];
    unsigned int f94;
    char pad98[0x64];
    int fFC;
} Cfg;

extern Cfg D_0027F540;
extern int D_001F2934;
extern unsigned int D_001F2974;
extern int D_001F2970;
extern int D_0037FAD8;
extern int D_0037FADC;
extern int D_0037FAE0;
extern int D_0037FAE4;

extern int func_0E8FC0(int a, int b, int c, int d, int e, int f, int g);
extern int func_0E21B8(int a, int b, int c);
extern int func_123000(unsigned int key);

void func_19A8E0(void)
{
    int *h = &D_001F2934;
    int *g = &D_001F2970;

    *h = func_0E8FC0(10, D_0027F540.fFC, 0, 0, 1, 0, 1);
    D_001F2974 = (D_001F2974 & 0xF800FFFF) | (D_0027F540.f94 << 16);
    *g = func_0E21B8(0x10, 1, 0x25);
    D_0037FADC = func_123000(0x650F1BD8);
    D_0037FAD8 = func_123000(0x0249FA02);
    D_0037FAE0 = func_123000(0x84A0DEC0);
    D_0037FAE4 = func_123000(0x3D3F1EE6);
}
