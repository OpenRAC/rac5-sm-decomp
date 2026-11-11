/* LEVEL_20:0x096438 -- placement copy of LEVEL_01_0BCA80.c: records a mode value in a state block (returning 0 when unchanged or when the mode-4 helper refuses), with an optional helper call when leaving mode 1. */

extern int func_024960(void);
extern void func_066F98(int a);
extern unsigned char D_0019A1B0[];

int func_096438(int a0)
{
    unsigned char *s1;

    D_0019A1B0[0x1D] = 0;
    if (a0 == *(int *)(D_0019A1B0 + 0x10)) {
        return 0;
    }
    if (a0 == 4) {
        if (func_024960() == 0) {
            return 0;
        }
    }
    s1 = D_0019A1B0;
    if (*(int *)(s1 + 0x10) == 1) {
        func_066F98(0x200);
    }
    *(int *)(s1 + 0x14) = a0;
    return 1;
}
