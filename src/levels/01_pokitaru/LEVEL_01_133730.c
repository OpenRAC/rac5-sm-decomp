/* LEVEL_01:0x133730 -- placement copy of FRONTEND_0210C0.c: checks a slot record's two sentinel fields and reports whether the second is not below the first. */
extern char *D_0020704C;
extern int func_132EC0(int a);
extern int func_132E00(void);

int func_133730(void)
{
    if (D_0020704C == 0) {
        return 1;
    }
    if (*(unsigned int *)(D_0020704C + 0xA4) == 0xFFFFFFFF) {
        return 0;
    }
    if (*(unsigned int *)(D_0020704C + 0xA8) == 0xFFFFFFFF) {
        return 0;
    }
    if (func_132EC0(1) == 0) {
        return 0;
    }
    if (((int (*)(int))func_132E00)(1) != 0) {
        return 1;
    }
    return *(unsigned int *)(D_0020704C + 0xA4) >= *(unsigned int *)(D_0020704C + 0xA8);
}
