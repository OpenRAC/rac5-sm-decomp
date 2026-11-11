/* LEVEL_24:0x1A3720 -- placement copy of LEVEL_01_1D19B8.c: packs two record words with fixed high bits, runs three helpers, and stores their results in globals. */

struct Cfg1D19B8 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D19B8 D_00263C80;
extern unsigned int D_001D9F74;
extern unsigned int D_001D9F78;
extern unsigned int D_001D9F7C;
extern char D_001D9FF0[];
extern char D_001DA010[];
unsigned int func_1A1B38(unsigned int a, char *b, char *c, int d);
unsigned int func_0DA688(unsigned int a);
unsigned int func_0FA290(unsigned int a);

void func_1A3720(void)
{
    unsigned int s0;

    D_001D9F74 = func_1A1B38((D_00263C80.w_12C << 16) | 0x800030D9u, D_001D9FF0, D_001DA010, 0);
    s0 = (D_00263C80.w_B8 << 16) | 0x800070D9u;
    D_001D9F78 = func_0DA688(s0);
    D_001D9F7C = func_0FA290(s0);
}
