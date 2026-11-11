/* LEVEL_10:0x1D75C8 -- placement copy of LEVEL_01_1D19B8.c: packs two record words with fixed high bits, runs three helpers, and stores their results in globals. */

struct Cfg1D19B8 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D19B8 D_002A11C0;
extern unsigned int D_00212084;
extern unsigned int D_00212088;
extern unsigned int D_0021208C;
extern char D_00212100[];
extern char D_00212120[];
unsigned int func_1D59E0(unsigned int a, char *b, char *c, int d);
unsigned int func_0E4608(unsigned int a);
unsigned int func_101FC0(unsigned int a);

void func_1D75C8(void)
{
    unsigned int s0;

    D_00212084 = func_1D59E0((D_002A11C0.w_12C << 16) | 0x800030D9u, D_00212100, D_00212120, 0);
    s0 = (D_002A11C0.w_B8 << 16) | 0x800070D9u;
    D_00212088 = func_0E4608(s0);
    D_0021208C = func_101FC0(s0);
}
