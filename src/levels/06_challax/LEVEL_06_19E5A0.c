/* LEVEL_06:0x19E5A0 -- placement copy of LEVEL_01_1AA108.c: creates the module's effect handle and mask word, then resolves four hashed resources into their global slots. */
typedef struct {
    char pad00[0x94];
    unsigned int f94;
    char pad98[0x64];
    int fFC;
} Cfg;

extern Cfg D_00284B40;
extern int D_001F7BFC;
extern unsigned int D_001F7C3C;
extern int D_001F7C38;
extern int D_00384D40;
extern int D_00384D44;
extern int D_00384D48;
extern int D_00384D4C;

extern int func_0E61A0(int a, int b, int c, int d, int e, int f, int g);
extern int func_0E00D0(int a, int b, int c);
extern int func_1206C0(unsigned int key);

void func_19E5A0(void)
{
    int *h = &D_001F7BFC;
    int *g = &D_001F7C38;

    *h = func_0E61A0(10, D_00284B40.fFC, 0, 0, 1, 0, 1);
    D_001F7C3C = (D_001F7C3C & 0xF800FFFF) | (D_00284B40.f94 << 16);
    *g = func_0E00D0(0x10, 1, 0x25);
    D_00384D44 = func_1206C0(0x650F1BD8);
    D_00384D40 = func_1206C0(0x0249FA02);
    D_00384D48 = func_1206C0(0x84A0DEC0);
    D_00384D4C = func_1206C0(0x3D3F1EE6);
}
