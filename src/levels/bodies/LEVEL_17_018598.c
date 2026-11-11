/* LEVEL_17:0x018598 -- placement copy of LEVEL_16_018C18.c: optionally stores a global into a context record, then dispatches on a small code range and returns 1. */

extern int func_018D68(void);
extern int func_018D78(void);
extern void func_0248A0(int a, int b, int c);
extern void func_018DA0(void);
extern void func_018518(int a, int b);
extern unsigned char D_001C3920[];
extern unsigned char D_001950B4[];

int func_018598(int a0, int a1)
{
    unsigned int r;
    unsigned int v;
    if (a1 != 0) {
        v = *(unsigned int *)D_001C3920;
        *(unsigned int *)(*(unsigned char **)D_001950B4 + 0x1C64) = v;
    }
    if ((unsigned int)(a0 - 1) < 0xA) {
        if (func_018D68() != 0) {
            r = (unsigned int)func_018D78();
            func_0248A0(0x90, r & 0xFF, 0xFF);
            func_018DA0();
        }
    }
    func_018518(7, a0);
    return 1;
}
