/* LEVEL_20:0x0169D0 -- placement copy of LEVEL_16_018C18.c: optionally stores a global into a context record, then dispatches on a small code range and returns 1. */

extern int func_0171A0(void);
extern int func_0171B0(void);
extern void func_021A98(int a, int b, int c);
extern void func_0171D8(void);
extern void func_016950(int a, int b);
extern unsigned char D_00131510[];
extern unsigned char D_00104194[];

int func_0169D0(int a0, int a1)
{
    unsigned int r;
    unsigned int v;
    if (a1 != 0) {
        v = *(unsigned int *)D_00131510;
        *(unsigned int *)(*(unsigned char **)D_00104194 + 0x1C64) = v;
    }
    if ((unsigned int)(a0 - 1) < 0xA) {
        if (func_0171A0() != 0) {
            r = (unsigned int)func_0171B0();
            func_021A98(0x90, r & 0xFF, 0xFF);
            func_0171D8();
        }
    }
    func_016950(7, a0);
    return 1;
}
