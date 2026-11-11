/* LEVEL_23:0x1A3350 -- placement copy of LEVEL_01_1D19B8.c: packs two record words with fixed high bits, runs three helpers, and stores their results in globals. */

struct Cfg1D19B8 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D19B8 D_00269200;
extern unsigned int D_001DC38C;
extern unsigned int D_001DC390;
extern unsigned int D_001DC394;
extern char D_001DC408[];
extern char D_001DC428[];
unsigned int func_1A2FD0(unsigned int a, char *b, char *c, int d);
unsigned int func_0D7B50(unsigned int a);
unsigned int func_0F5568(unsigned int a);

void func_1A3350(void)
{
    unsigned int s0;

    D_001DC38C = func_1A2FD0((D_00269200.w_12C << 16) | 0x800030D9u, D_001DC408, D_001DC428, 0);
    s0 = (D_00269200.w_B8 << 16) | 0x800070D9u;
    D_001DC390 = func_0D7B50(s0);
    D_001DC394 = func_0F5568(s0);
}
