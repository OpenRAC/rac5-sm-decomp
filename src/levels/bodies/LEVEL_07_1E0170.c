/* LEVEL_07:0x1E0170 -- placement copy of LEVEL_01_1D19B8.c: packs two record words with fixed high bits, runs three helpers, and stores their results in globals. */

struct Cfg1D19B8 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D19B8 D_002AD6C0;
extern unsigned int D_0021DDE4;
extern unsigned int D_0021DDE8;
extern unsigned int D_0021DDEC;
extern char D_0021DE60[];
extern char D_0021DE80[];
unsigned int func_1DE588(unsigned int a, char *b, char *c, int d);
unsigned int func_0E4860(unsigned int a);
unsigned int func_103480(unsigned int a);

void func_1E0170(void)
{
    unsigned int s0;

    D_0021DDE4 = func_1DE588((D_002AD6C0.w_12C << 16) | 0x800030D9u, D_0021DE60, D_0021DE80, 0);
    s0 = (D_002AD6C0.w_B8 << 16) | 0x800070D9u;
    D_0021DDE8 = func_0E4860(s0);
    D_0021DDEC = func_103480(s0);
}
