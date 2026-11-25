/* LEVEL_01:0x1AA108 -- creates the module's effect handle and mask word, then resolves four hashed resources into their global slots. */
typedef struct {
    char pad00[0x94];
    unsigned int f94;
    char pad98[0x64];
    int fFC;
} Cfg;

extern Cfg D_00297DC0;
extern int D_00208C3C;
extern unsigned int D_00208C7C;
extern int D_00208C78;
extern int D_003980F0;
extern int D_003980F4;
extern int D_003980F8;
extern int D_003980FC;

extern int func_0ED0E0(int a, int b, int c, int d, int e, int f, int g);
extern int func_0E57D0(int a, int b, int c);
extern int func_12A068(unsigned int key);

void func_1AA108(void)
{
    int *h = &D_00208C3C;
    int *g = &D_00208C78;

    *h = func_0ED0E0(10, D_00297DC0.fFC, 0, 0, 1, 0, 1);
    D_00208C7C = (D_00208C7C & 0xF800FFFF) | (D_00297DC0.f94 << 16);
    *g = func_0E57D0(0x10, 1, 0x25);
    D_003980F4 = func_12A068(0x650F1BD8);
    D_003980F0 = func_12A068(0x0249FA02);
    D_003980F8 = func_12A068(0x84A0DEC0);
    D_003980FC = func_12A068(0x3D3F1EE6);
}
