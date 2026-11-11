/* LEVEL_07:0x1E8258 -- placement copy of LEVEL_01_1D9AA0.c: seeds a global handle once from a packed config word, then stores a second helper result. */

struct Cfg1D9AA0 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D9AA0 D_002AD6C0;
extern int D_0021E31C;
extern unsigned int D_0021E318;
extern char D_0021E2E8[];
extern char D_0021E308[];
extern char D_001E8338[];
unsigned int func_1DE588(unsigned int a, char *b, char *c, char *d);
unsigned int func_0E4860(unsigned int a);

void func_1E8258(void)
{
    if (D_0021E31C == -1) {
        D_0021E31C = func_1DE588((D_002AD6C0.w_12C << 16) | 0x80007059u, D_0021E2E8, D_0021E308, D_001E8338);
    }
    D_0021E318 = func_0E4860((D_002AD6C0.w_B8 << 16) | 0x800070D9u);
}
