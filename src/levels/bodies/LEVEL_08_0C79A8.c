/* LEVEL_08:0x0C79A8 -- placement copy of LEVEL_01_0BCA80.c: records a mode value in a state block (returning 0 when unchanged or when the mode-4 helper refuses), with an optional helper call when leaving mode 1. */

extern int func_02A988(void);
extern void func_08FE38(int a);
extern unsigned char D_00377CB0[];

int func_0C79A8(int a0)
{
    unsigned char *s1;

    D_00377CB0[0x1D] = 0;
    if (a0 == *(int *)(D_00377CB0 + 0x10)) {
        return 0;
    }
    if (a0 == 4) {
        if (func_02A988() == 0) {
            return 0;
        }
    }
    s1 = D_00377CB0;
    if (*(int *)(s1 + 0x10) == 1) {
        func_08FE38(0x200);
    }
    *(int *)(s1 + 0x14) = a0;
    return 1;
}
