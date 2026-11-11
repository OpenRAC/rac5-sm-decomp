/* LEVEL_10:0x1DF6B0 -- placement copy of LEVEL_01_1D9AA0.c: seeds a global handle once from a packed config word, then stores a second helper result. */

struct Cfg1D9AA0 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D9AA0 D_002A11C0;
extern int D_002125BC;
extern unsigned int D_002125B8;
extern char D_00212588[];
extern char D_002125A8[];
extern char D_001DF790[];
unsigned int func_1D59E0(unsigned int a, char *b, char *c, char *d);
unsigned int func_0E4608(unsigned int a);

void func_1DF6B0(void)
{
    if (D_002125BC == -1) {
        D_002125BC = func_1D59E0((D_002A11C0.w_12C << 16) | 0x80007059u, D_00212588, D_002125A8, D_001DF790);
    }
    D_002125B8 = func_0E4608((D_002A11C0.w_B8 << 16) | 0x800070D9u);
}
