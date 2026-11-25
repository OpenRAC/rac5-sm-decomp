/* LEVEL_05:0x12F0A8 -- placement copy of LEVEL_01_133730.c: placement copy of FRONTEND_0210C0.c: checks a slot record's two sentinel fields and reports whether the second is not below the first. */
extern char *D_001F60CC;
extern int func_12E838(void);
extern int func_12E778(void);

int func_12F0A8(void)
{
    if (D_001F60CC == 0) {
        return 1;
    }
    if (*(unsigned int *)(D_001F60CC + 0xA4) == 0xFFFFFFFF) {
        return 0;
    }
    if (*(unsigned int *)(D_001F60CC + 0xA8) == 0xFFFFFFFF) {
        return 0;
    }
    if (((int (*)(int))func_12E838)(1) == 0) {
        return 0;
    }
    if (((int (*)(int))func_12E778)(1) != 0) {
        return 1;
    }
    return *(unsigned int *)(D_001F60CC + 0xA4) >= *(unsigned int *)(D_001F60CC + 0xA8);
}
