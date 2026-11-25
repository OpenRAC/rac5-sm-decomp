/* LEVEL_07:0x1BD0D0 -- placement copy of LEVEL_01_1AA108.c: creates the module's effect handle and mask word, then resolves four hashed resources into their global slots. */
typedef struct {
    char pad00[0x94];
    unsigned int f94;
    char pad98[0x64];
    int fFC;
} Cfg;

extern Cfg D_002AD6C0;
extern int D_0021D8DC;
extern unsigned int D_0021D91C;
extern int D_0021D918;
extern int D_003ADC78;
extern int D_003ADC7C;
extern int D_003ADC80;
extern int D_003ADC84;

extern int func_0EDEE0(int a, int b, int c, int d, int e, int f, int g);
extern int func_0E6CF8(int a, int b, int c);
extern int func_12D068(unsigned int key);

void func_1BD0D0(void)
{
    int *h = &D_0021D8DC;
    int *g = &D_0021D918;

    *h = func_0EDEE0(10, D_002AD6C0.fFC, 0, 0, 1, 0, 1);
    D_0021D91C = (D_0021D91C & 0xF800FFFF) | (D_002AD6C0.f94 << 16);
    *g = func_0E6CF8(0x10, 1, 0x25);
    D_003ADC7C = func_12D068(0x650F1BD8);
    D_003ADC78 = func_12D068(0x0249FA02);
    D_003ADC80 = func_12D068(0x84A0DEC0);
    D_003ADC84 = func_12D068(0x3D3F1EE6);
}
