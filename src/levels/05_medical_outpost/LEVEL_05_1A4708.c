/* LEVEL_05:0x1A4708 -- placement copy of LEVEL_01_1AA108.c: creates the module's effect handle and mask word, then resolves four hashed resources into their global slots. */
typedef struct {
    char pad00[0x94];
    unsigned int f94;
    char pad98[0x64];
    int fFC;
} Cfg;

extern Cfg D_00283C80;
extern int D_001F7CDC;
extern unsigned int D_001F7D1C;
extern int D_001F7D18;
extern int D_0038F720;
extern int D_0038F724;
extern int D_0038F728;
extern int D_0038F72C;

extern int func_0E9220(int a, int b, int c, int d, int e, int f, int g);
extern int func_0E3240(int a, int b, int c);
extern int func_1259E0(unsigned int key);

void func_1A4708(void)
{
    int *h = &D_001F7CDC;
    int *g = &D_001F7D18;

    *h = func_0E9220(10, D_00283C80.fFC, 0, 0, 1, 0, 1);
    D_001F7D1C = (D_001F7D1C & 0xF800FFFF) | (D_00283C80.f94 << 16);
    *g = func_0E3240(0x10, 1, 0x25);
    D_0038F724 = func_1259E0(0x650F1BD8);
    D_0038F720 = func_1259E0(0x0249FA02);
    D_0038F728 = func_1259E0(0x84A0DEC0);
    D_0038F72C = func_1259E0(0x3D3F1EE6);
}
