/* LEVEL_04:0x0C2298 -- placement copy of LEVEL_01_0BCA80.c: records a mode value in a state block (returning 0 when unchanged or when the mode-4 helper refuses), with an optional helper call when leaving mode 1. */

extern int func_029EB8(void);
extern void func_08B080(int a);
extern unsigned char D_00343230[];

int func_0C2298(int a0)
{
    unsigned char *s1;

    D_00343230[0x1D] = 0;
    if (a0 == *(int *)(D_00343230 + 0x10)) {
        return 0;
    }
    if (a0 == 4) {
        if (func_029EB8() == 0) {
            return 0;
        }
    }
    s1 = D_00343230;
    if (*(int *)(s1 + 0x10) == 1) {
        func_08B080(0x200);
    }
    *(int *)(s1 + 0x14) = a0;
    return 1;
}
