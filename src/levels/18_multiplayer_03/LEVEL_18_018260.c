/* LEVEL_18:0x018260 -- placement copy of LEVEL_16_018C18.c: optionally stores a global into a context record, then dispatches on a small code range and returns 1. */

extern int func_018A30(void);
extern int func_018A40(void);
extern void func_0244D0(int a, int b, int c);
extern void func_018A68(void);
extern void func_0181E0(int a, int b);
extern unsigned char D_001D1A20[];
extern unsigned char D_001A2F34[];

int func_018260(int a0, int a1)
{
    unsigned int r;
    unsigned int v;
    if (a1 != 0) {
        v = *(unsigned int *)D_001D1A20;
        *(unsigned int *)(*(unsigned char **)D_001A2F34 + 0x1C64) = v;
    }
    if ((unsigned int)(a0 - 1) < 0xA) {
        if (func_018A30() != 0) {
            r = (unsigned int)func_018A40();
            func_0244D0(0x90, r & 0xFF, 0xFF);
            func_018A68();
        }
    }
    func_0181E0(7, a0);
    return 1;
}
