/* LEVEL_01:0x1D19B8 -- packs two record words with fixed high bits, runs three helpers, and stores their results in globals. */

struct Cfg1D19B8 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D19B8 D_00297DC0;
extern unsigned int D_0020910C;
extern unsigned int D_00209110;
extern unsigned int D_00209114;
extern char D_00209188[];
extern char D_002091A8[];
unsigned int func_1D1638(unsigned int a, char *b, char *c, int d);
unsigned int func_0E31C8(unsigned int a);
unsigned int func_102680(unsigned int a);

void func_1D19B8(void)
{
    unsigned int s0;

    D_0020910C = func_1D1638((D_00297DC0.w_12C << 16) | 0x800030D9u, D_00209188, D_002091A8, 0);
    s0 = (D_00297DC0.w_B8 << 16) | 0x800070D9u;
    D_00209110 = func_0E31C8(s0);
    D_00209114 = func_102680(s0);
}
