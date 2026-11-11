/* LEVEL_16:0x0ABF08 -- placement copy of LEVEL_01_0BCA80.c: records a mode value in a state block (returning 0 when unchanged or when the mode-4 helper refuses), with an optional helper call when leaving mode 1. */

extern int func_027E58(void);
extern void func_079328(int a);
extern unsigned char D_00276970[];

int func_0ABF08(int a0)
{
    unsigned char *s1;

    D_00276970[0x1D] = 0;
    if (a0 == *(int *)(D_00276970 + 0x10)) {
        return 0;
    }
    if (a0 == 4) {
        if (func_027E58() == 0) {
            return 0;
        }
    }
    s1 = D_00276970;
    if (*(int *)(s1 + 0x10) == 1) {
        func_079328(0x200);
    }
    *(int *)(s1 + 0x14) = a0;
    return 1;
}
