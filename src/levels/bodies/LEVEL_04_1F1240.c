/* LEVEL_04:0x1F1240 -- placement copy of LEVEL_01_1D9AA0.c: seeds a global handle once from a packed config word, then stores a second helper result. */

struct Cfg1D9AA0 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D9AA0 D_002B25C0;
extern int D_00222F3C;
extern unsigned int D_00222F38;
extern char D_00222F08[];
extern char D_00222F28[];
extern char D_001F1320[];
unsigned int func_1E8620(unsigned int a, char *b, char *c, char *d);
unsigned int func_0E8A88(unsigned int a);

void func_1F1240(void)
{
    if (D_00222F3C == -1) {
        D_00222F3C = func_1E8620((D_002B25C0.w_12C << 16) | 0x80007059u, D_00222F08, D_00222F28, D_001F1320);
    }
    D_00222F38 = func_0E8A88((D_002B25C0.w_B8 << 16) | 0x800070D9u);
}
