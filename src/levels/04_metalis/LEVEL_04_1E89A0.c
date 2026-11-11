/* LEVEL_04:0x1E89A0 -- placement copy of LEVEL_01_1D19B8.c: packs two record words with fixed high bits, runs three helpers, and stores their results in globals. */

struct Cfg1D19B8 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D19B8 D_002B25C0;
extern unsigned int D_002229F4;
extern unsigned int D_002229F8;
extern unsigned int D_002229FC;
extern char D_00222A70[];
extern char D_00222A90[];
unsigned int func_1E8620(unsigned int a, char *b, char *c, int d);
unsigned int func_0E8A88(unsigned int a);
unsigned int func_10C970(unsigned int a);

void func_1E89A0(void)
{
    unsigned int s0;

    D_002229F4 = func_1E8620((D_002B25C0.w_12C << 16) | 0x800030D9u, D_00222A70, D_00222A90, 0);
    s0 = (D_002B25C0.w_B8 << 16) | 0x800070D9u;
    D_002229F8 = func_0E8A88(s0);
    D_002229FC = func_10C970(s0);
}
