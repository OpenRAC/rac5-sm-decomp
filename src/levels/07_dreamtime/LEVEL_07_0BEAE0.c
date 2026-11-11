/* LEVEL_07:0x0BEAE0 -- placement copy of LEVEL_01_0BCA80.c: records a mode value in a state block (returning 0 when unchanged or when the mode-4 helper refuses), with an optional helper call when leaving mode 1. */

extern int func_02A750(void);
extern void func_089EB8(int a);
extern unsigned char D_0033E330[];

int func_0BEAE0(int a0)
{
    unsigned char *s1;

    D_0033E330[0x1D] = 0;
    if (a0 == *(int *)(D_0033E330 + 0x10)) {
        return 0;
    }
    if (a0 == 4) {
        if (func_02A750() == 0) {
            return 0;
        }
    }
    s1 = D_0033E330;
    if (*(int *)(s1 + 0x10) == 1) {
        func_089EB8(0x200);
    }
    *(int *)(s1 + 0x14) = a0;
    return 1;
}
