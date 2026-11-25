/* LEVEL_24:0x186BE0 -- placement copy of LEVEL_01_1AA108.c: creates the module's effect handle and mask word, then resolves four hashed resources into their global slots. */
typedef struct {
    char pad00[0x94];
    unsigned int f94;
    char pad98[0x64];
    int fFC;
} Cfg;

extern Cfg D_00263C80;
extern int D_001D9AEC;
extern unsigned int D_001D9B2C;
extern int D_001D9B28;
extern int D_00361F28;
extern int D_00361F2C;
extern int D_00361F30;
extern int D_00361F34;

extern int func_0E2FB8(int a, int b, int c, int d, int e, int f, int g);
extern int func_0DCB20(int a, int b, int c);
extern int func_11FB68(unsigned int key);

void func_186BE0(void)
{
    int *h = &D_001D9AEC;
    int *g = &D_001D9B28;

    *h = func_0E2FB8(10, D_00263C80.fFC, 0, 0, 1, 0, 1);
    D_001D9B2C = (D_001D9B2C & 0xF800FFFF) | (D_00263C80.f94 << 16);
    *g = func_0DCB20(0x10, 1, 0x25);
    D_00361F2C = func_11FB68(0x650F1BD8);
    D_00361F28 = func_11FB68(0x0249FA02);
    D_00361F30 = func_11FB68(0x84A0DEC0);
    D_00361F34 = func_11FB68(0x3D3F1EE6);
}
