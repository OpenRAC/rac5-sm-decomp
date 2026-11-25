/* LEVEL_02:0x139AE0 -- placement copy of LEVEL_01_133730.c: placement copy of FRONTEND_0210C0.c: checks a slot record's two sentinel fields and reports whether the second is not below the first. */
extern char *D_0021C00C;
extern int func_139270(int a);
extern int func_1391B0(void);

int func_139AE0(void)
{
    if (D_0021C00C == 0) {
        return 1;
    }
    if (*(unsigned int *)(D_0021C00C + 0xA4) == 0xFFFFFFFF) {
        return 0;
    }
    if (*(unsigned int *)(D_0021C00C + 0xA8) == 0xFFFFFFFF) {
        return 0;
    }
    if (func_139270(1) == 0) {
        return 0;
    }
    if (((int (*)(int))func_1391B0)(1) != 0) {
        return 1;
    }
    return *(unsigned int *)(D_0021C00C + 0xA4) >= *(unsigned int *)(D_0021C00C + 0xA8);
}
