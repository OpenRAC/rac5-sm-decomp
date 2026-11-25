/* LEVEL_21:0x0F25F8 -- placement copy of LEVEL_01_133730.c: placement copy of FRONTEND_0210C0.c: checks a slot record's two sentinel fields and reports whether the second is not below the first. */
extern char *D_0015B9AC;
extern int func_0F1D88(int a);
extern int func_0F1CC8(void);

int func_0F25F8(void)
{
    if (D_0015B9AC == 0) {
        return 1;
    }
    if (*(unsigned int *)(D_0015B9AC + 0xA4) == 0xFFFFFFFF) {
        return 0;
    }
    if (*(unsigned int *)(D_0015B9AC + 0xA8) == 0xFFFFFFFF) {
        return 0;
    }
    if (func_0F1D88(1) == 0) {
        return 0;
    }
    if (((int (*)(int))func_0F1CC8)(1) != 0) {
        return 1;
    }
    return *(unsigned int *)(D_0015B9AC + 0xA4) >= *(unsigned int *)(D_0015B9AC + 0xA8);
}
