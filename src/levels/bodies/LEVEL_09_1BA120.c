/* LEVEL_09:0x1BA120 -- placement copy of LEVEL_01_1D19B8.c: packs two record words with fixed high bits, runs three helpers, and stores their results in globals. */

struct Cfg1D19B8 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D19B8 D_0027F540;
extern unsigned int D_001F2D8C;
extern unsigned int D_001F2D90;
extern unsigned int D_001F2D94;
extern char D_001F2E08[];
extern char D_001F2E28[];
unsigned int func_1B8538(unsigned int a, char *b, char *c, int d);
unsigned int func_0DFD20(unsigned int a);
unsigned int func_0FE560(unsigned int a);

void func_1BA120(void)
{
    unsigned int s0;

    D_001F2D8C = func_1B8538((D_0027F540.w_12C << 16) | 0x800030D9u, D_001F2E08, D_001F2E28, 0);
    s0 = (D_0027F540.w_B8 << 16) | 0x800070D9u;
    D_001F2D90 = func_0DFD20(s0);
    D_001F2D94 = func_0FE560(s0);
}
