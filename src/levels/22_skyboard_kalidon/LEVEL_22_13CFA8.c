/* LEVEL_22:0x13CFA8 -- placement copy of LEVEL_01_1D19B8.c: packs two record words with fixed high bits, runs three helpers, and stores their results in globals. */

struct Cfg1D19B8 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D19B8 D_001ED980;
extern unsigned int D_00166A2C;
extern unsigned int D_00166A30;
extern unsigned int D_00166A34;
extern char D_00166AA8[];
extern char D_00166AC8[];
unsigned int func_13CC28(unsigned int a, char *b, char *c, int d);
unsigned int func_0CED38(unsigned int a);
unsigned int func_0E5C70(unsigned int a);

void func_13CFA8(void)
{
    unsigned int s0;

    D_00166A2C = func_13CC28((D_001ED980.w_12C << 16) | 0x800030D9u, D_00166AA8, D_00166AC8, 0);
    s0 = (D_001ED980.w_B8 << 16) | 0x800070D9u;
    D_00166A30 = func_0CED38(s0);
    D_00166A34 = func_0E5C70(s0);
}
