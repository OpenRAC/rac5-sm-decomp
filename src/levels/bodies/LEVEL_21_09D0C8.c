/* LEVEL_21:0x09D0C8 -- placement copy of LEVEL_01_0BCA80.c: records a mode value in a state block (returning 0 when unchanged or when the mode-4 helper refuses), with an optional helper call when leaving mode 1. */

extern int func_023BE8(void);
extern void func_06C4C8(int a);
extern unsigned char D_00240270[];

int func_09D0C8(int a0)
{
    unsigned char *s1;

    D_00240270[0x1D] = 0;
    if (a0 == *(int *)(D_00240270 + 0x10)) {
        return 0;
    }
    if (a0 == 4) {
        if (func_023BE8() == 0) {
            return 0;
        }
    }
    s1 = D_00240270;
    if (*(int *)(s1 + 0x10) == 1) {
        func_06C4C8(0x200);
    }
    *(int *)(s1 + 0x14) = a0;
    return 1;
}
