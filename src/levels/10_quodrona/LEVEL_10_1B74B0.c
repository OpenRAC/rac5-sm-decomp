/* LEVEL_10:0x1B74B0 -- placement copy of LEVEL_01_1AA108.c: creates the module's effect handle and mask word, then resolves four hashed resources into their global slots. */
typedef struct {
    char pad00[0x94];
    unsigned int f94;
    char pad98[0x64];
    int fFC;
} Cfg;

extern Cfg D_002A11C0;
extern int D_00211A8C;
extern unsigned int D_00211ACC;
extern int D_00211AC8;
extern int D_003A19D0;
extern int D_003A19D4;
extern int D_003A19D8;
extern int D_003A19DC;

extern int func_0ECA20(int a, int b, int c, int d, int e, int f, int g);
extern int func_0E6C10(int a, int b, int c);
extern int func_127EC8(unsigned int key);

void func_1B74B0(void)
{
    int *h = &D_00211A8C;
    int *g = &D_00211AC8;

    *h = func_0ECA20(10, D_002A11C0.fFC, 0, 0, 1, 0, 1);
    D_00211ACC = (D_00211ACC & 0xF800FFFF) | (D_002A11C0.f94 << 16);
    *g = func_0E6C10(0x10, 1, 0x25);
    D_003A19D4 = func_127EC8(0x650F1BD8);
    D_003A19D0 = func_127EC8(0x0249FA02);
    D_003A19D8 = func_127EC8(0x84A0DEC0);
    D_003A19DC = func_127EC8(0x3D3F1EE6);
}
