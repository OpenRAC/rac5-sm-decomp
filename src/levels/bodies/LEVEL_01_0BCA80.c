/* LEVEL_01:0x0BCA80 -- records a mode value in a state block (returning 0 when unchanged or when the mode-4 helper refuses), with an optional helper call when leaving mode 1. */

extern int func_02A410(void);
extern void func_087DE8(int a);
extern unsigned char D_00328A30[];

int func_0BCA80(int a0)
{
    unsigned char *s1;

    D_00328A30[0x1D] = 0;
    if (a0 == *(int *)(D_00328A30 + 0x10)) {
        return 0;
    }
    if (a0 == 4) {
        if (func_02A410() == 0) {
            return 0;
        }
    }
    s1 = D_00328A30;
    if (*(int *)(s1 + 0x10) == 1) {
        func_087DE8(0x200);
    }
    *(int *)(s1 + 0x14) = a0;
    return 1;
}
