/* LEVEL_19:0x018918 -- placement copy of LEVEL_16_018C18.c: optionally stores a global into a context record, then dispatches on a small code range and returns 1. */

extern int func_0190E8(void);
extern int func_0190F8(void);
extern void func_024AC8(int a, int b, int c);
extern void func_019120(void);
extern void func_018898(int a, int b);
extern unsigned char D_001D16A0[];
extern unsigned char D_001A2C34[];

int func_018918(int a0, int a1)
{
    unsigned int r;
    unsigned int v;
    if (a1 != 0) {
        v = *(unsigned int *)D_001D16A0;
        *(unsigned int *)(*(unsigned char **)D_001A2C34 + 0x1C64) = v;
    }
    if ((unsigned int)(a0 - 1) < 0xA) {
        if (func_0190E8() != 0) {
            r = (unsigned int)func_0190F8();
            func_024AC8(0x90, r & 0xFF, 0xFF);
            func_019120();
        }
    }
    func_018898(7, a0);
    return 1;
}
