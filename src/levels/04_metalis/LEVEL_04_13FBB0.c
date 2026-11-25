/* LEVEL_04:0x13FBB0 -- placement copy of LEVEL_01_133730.c: placement copy of FRONTEND_0210C0.c: checks a slot record's two sentinel fields and reports whether the second is not below the first. */
extern char *D_0022046C;
extern int func_13F340(int a);
extern int func_13F280(void);

int func_13FBB0(void)
{
    if (D_0022046C == 0) {
        return 1;
    }
    if (*(unsigned int *)(D_0022046C + 0xA4) == 0xFFFFFFFF) {
        return 0;
    }
    if (*(unsigned int *)(D_0022046C + 0xA8) == 0xFFFFFFFF) {
        return 0;
    }
    if (func_13F340(1) == 0) {
        return 0;
    }
    if (((int (*)(int))func_13F280)(1) != 0) {
        return 1;
    }
    return *(unsigned int *)(D_0022046C + 0xA4) >= *(unsigned int *)(D_0022046C + 0xA8);
}
