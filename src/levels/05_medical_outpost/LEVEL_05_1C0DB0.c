/* LEVEL_05:0x1C0DB0 -- placement copy of LEVEL_01_1D19B8.c: packs two record words with fixed high bits, runs three helpers, and stores their results in globals. */

struct Cfg1D19B8 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D19B8 D_00283C80;
extern unsigned int D_001F8084;
extern unsigned int D_001F8088;
extern unsigned int D_001F808C;
extern char D_001F8100[];
extern char D_001F8120[];
unsigned int func_1C0A30(unsigned int a, char *b, char *c, int d);
unsigned int func_0E0DA8(unsigned int a);
unsigned int func_0FFD60(unsigned int a);

void func_1C0DB0(void)
{
    unsigned int s0;

    D_001F8084 = func_1C0A30((D_00283C80.w_12C << 16) | 0x800030D9u, D_001F8100, D_001F8120, 0);
    s0 = (D_00283C80.w_B8 << 16) | 0x800070D9u;
    D_001F8088 = func_0E0DA8(s0);
    D_001F808C = func_0FFD60(s0);
}
