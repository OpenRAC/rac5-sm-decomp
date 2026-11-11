/* LEVEL_09:0x1C2208 -- placement copy of LEVEL_01_1D9AA0.c: seeds a global handle once from a packed config word, then stores a second helper result. */

struct Cfg1D9AA0 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D9AA0 D_0027F540;
extern int D_001F32C4;
extern unsigned int D_001F32C0;
extern char D_001F3290[];
extern char D_001F32B0[];
extern char D_001C22E8[];
unsigned int func_1B8538(unsigned int a, char *b, char *c, char *d);
unsigned int func_0DFD20(unsigned int a);

void func_1C2208(void)
{
    if (D_001F32C4 == -1) {
        D_001F32C4 = func_1B8538((D_0027F540.w_12C << 16) | 0x80007059u, D_001F3290, D_001F32B0, D_001C22E8);
    }
    D_001F32C0 = func_0DFD20((D_0027F540.w_B8 << 16) | 0x800070D9u);
}
