/* LEVEL_08:0x212D10 -- placement copy of LEVEL_01_1D19B8.c: packs two record words with fixed high bits, runs three helpers, and stores their results in globals. */

struct Cfg1D19B8 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D19B8 D_002E7040;
extern unsigned int D_00252BFC;
extern unsigned int D_00252C00;
extern unsigned int D_00252C04;
extern char D_00252C78[];
extern char D_00252C98[];
unsigned int func_211128(unsigned int a, char *b, char *c, int d);
unsigned int func_0EE198(unsigned int a);
unsigned int func_110E80(unsigned int a);

void func_212D10(void)
{
    unsigned int s0;

    D_00252BFC = func_211128((D_002E7040.w_12C << 16) | 0x800030D9u, D_00252C78, D_00252C98, 0);
    s0 = (D_002E7040.w_B8 << 16) | 0x800070D9u;
    D_00252C00 = func_0EE198(s0);
    D_00252C04 = func_110E80(s0);
}
