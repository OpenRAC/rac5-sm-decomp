/* LEVEL_02:0x1E6650 -- placement copy of LEVEL_01_1D19B8.c: packs two record words with fixed high bits, runs three helpers, and stores their results in globals. */

struct Cfg1D19B8 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D19B8 D_002AF2C0;
extern unsigned int D_0021E05C;
extern unsigned int D_0021E060;
extern unsigned int D_0021E064;
extern char D_0021E0D8[];
extern char D_0021E0F8[];
unsigned int func_1E62D0(unsigned int a, char *b, char *c, int d);
unsigned int func_0E9B58(unsigned int a);
unsigned int func_108830(unsigned int a);

void func_1E6650(void)
{
    unsigned int s0;

    D_0021E05C = func_1E62D0((D_002AF2C0.w_12C << 16) | 0x800030D9u, D_0021E0D8, D_0021E0F8, 0);
    s0 = (D_002AF2C0.w_B8 << 16) | 0x800070D9u;
    D_0021E060 = func_0E9B58(s0);
    D_0021E064 = func_108830(s0);
}
