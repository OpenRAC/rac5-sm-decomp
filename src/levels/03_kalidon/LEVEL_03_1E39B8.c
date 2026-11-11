/* LEVEL_03:0x1E39B8 -- placement copy of LEVEL_01_1D19B8.c: packs two record words with fixed high bits, runs three helpers, and stores their results in globals. */

struct Cfg1D19B8 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D19B8 D_002B2C40;
extern unsigned int D_00221FD4;
extern unsigned int D_00221FD8;
extern unsigned int D_00221FDC;
extern char D_00222050[];
extern char D_00222070[];
unsigned int func_1E1DD0(unsigned int a, char *b, char *c, int d);
unsigned int func_0E2FB0(unsigned int a);
unsigned int func_100F18(unsigned int a);

void func_1E39B8(void)
{
    unsigned int s0;

    D_00221FD4 = func_1E1DD0((D_002B2C40.w_12C << 16) | 0x800030D9u, D_00222050, D_00222070, 0);
    s0 = (D_002B2C40.w_B8 << 16) | 0x800070D9u;
    D_00221FD8 = func_0E2FB0(s0);
    D_00221FDC = func_100F18(s0);
}
