/* LEVEL_22:0x10AC00 -- placement copy of LEVEL_01_133730.c: placement copy of FRONTEND_0210C0.c: checks a slot record's two sentinel fields and reports whether the second is not below the first. */
extern char *D_0016602C;
extern int func_10A390(int a);
extern int func_10A2D0(void);

int func_10AC00(void)
{
    if (D_0016602C == 0) {
        return 1;
    }
    if (*(unsigned int *)(D_0016602C + 0xA4) == 0xFFFFFFFF) {
        return 0;
    }
    if (*(unsigned int *)(D_0016602C + 0xA8) == 0xFFFFFFFF) {
        return 0;
    }
    if (func_10A390(1) == 0) {
        return 0;
    }
    if (((int (*)(int))func_10A2D0)(1) != 0) {
        return 1;
    }
    return *(unsigned int *)(D_0016602C + 0xA4) >= *(unsigned int *)(D_0016602C + 0xA8);
}
