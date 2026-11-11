/* LEVEL_06:0x1BF200 -- placement copy of LEVEL_01_1D19B8.c: packs two record words with fixed high bits, runs three helpers, and stores their results in globals. */

struct Cfg1D19B8 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D19B8 D_00284B40;
extern unsigned int D_001F7FC4;
extern unsigned int D_001F7FC8;
extern unsigned int D_001F7FCC;
extern char D_001F8040[];
extern char D_001F8060[];
unsigned int func_1BD618(unsigned int a, char *b, char *c, int d);
unsigned int func_0DDAC8(unsigned int a);
unsigned int func_0FB740(unsigned int a);

void func_1BF200(void)
{
    unsigned int s0;

    D_001F7FC4 = func_1BD618((D_00284B40.w_12C << 16) | 0x800030D9u, D_001F8040, D_001F8060, 0);
    s0 = (D_00284B40.w_B8 << 16) | 0x800070D9u;
    D_001F7FC8 = func_0DDAC8(s0);
    D_001F7FCC = func_0FB740(s0);
}
