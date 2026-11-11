/* LEVEL_03:0x1EBAA0 -- placement copy of LEVEL_01_1D9AA0.c: seeds a global handle once from a packed config word, then stores a second helper result. */

struct Cfg1D9AA0 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D9AA0 D_002B2C40;
extern int D_0022250C;
extern unsigned int D_00222508;
extern char D_002224D8[];
extern char D_002224F8[];
extern char D_001EBB80[];
unsigned int func_1E1DD0(unsigned int a, char *b, char *c, char *d);
unsigned int func_0E2FB0(unsigned int a);

void func_1EBAA0(void)
{
    if (D_0022250C == -1) {
        D_0022250C = func_1E1DD0((D_002B2C40.w_12C << 16) | 0x80007059u, D_002224D8, D_002224F8, D_001EBB80);
    }
    D_00222508 = func_0E2FB0((D_002B2C40.w_B8 << 16) | 0x800070D9u);
}
