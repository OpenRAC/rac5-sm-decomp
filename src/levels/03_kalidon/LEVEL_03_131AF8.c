/* LEVEL_03:0x131AF8 -- placement copy of LEVEL_01_133730.c: placement copy of FRONTEND_0210C0.c: checks a slot record's two sentinel fields and reports whether the second is not below the first. */
extern char *D_0021F6CC;
extern int func_131288(void);
extern int func_1311C8(void);

int func_131AF8(void)
{
    if (D_0021F6CC == 0) {
        return 1;
    }
    if (*(unsigned int *)(D_0021F6CC + 0xA4) == 0xFFFFFFFF) {
        return 0;
    }
    if (*(unsigned int *)(D_0021F6CC + 0xA8) == 0xFFFFFFFF) {
        return 0;
    }
    if (((int (*)(int))func_131288)(1) == 0) {
        return 0;
    }
    if (((int (*)(int))func_1311C8)(1) != 0) {
        return 1;
    }
    return *(unsigned int *)(D_0021F6CC + 0xA4) >= *(unsigned int *)(D_0021F6CC + 0xA8);
}
