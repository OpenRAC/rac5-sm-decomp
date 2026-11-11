/* LEVEL_19:0x110B38 -- placement copy of FRONTEND_0210C0.c: checks a slot record's two sentinel fields and reports whether the second is not below the first. */
extern char *D_001B5CDC;
extern int func_110358(int a);
extern int func_110318(int a);

int func_110B38(void)
{
    if (D_001B5CDC == 0) {
        return 1;
    }
    if (*(unsigned int *)(D_001B5CDC + 0xA4) == 0xFFFFFFFF) {
        return 0;
    }
    if (*(unsigned int *)(D_001B5CDC + 0xA8) == 0xFFFFFFFF) {
        return 0;
    }
    if (func_110358(1) == 0) {
        return 0;
    }
    if (func_110318(1) != 0) {
        return 1;
    }
    return *(unsigned int *)(D_001B5CDC + 0xA4) >= *(unsigned int *)(D_001B5CDC + 0xA8);
}
