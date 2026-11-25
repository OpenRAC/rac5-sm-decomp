/* LEVEL_10:0x1315B0 -- placement copy of LEVEL_01_133730.c: placement copy of FRONTEND_0210C0.c: checks a slot record's two sentinel fields and reports whether the second is not below the first. */
extern char *D_0020FCAC;
extern int func_130D20(int a);
extern int func_130C60(void);

int func_1315B0(void)
{
    if (D_0020FCAC == 0) {
        return 1;
    }
    if (*(unsigned int *)(D_0020FCAC + 0xA4) == 0xFFFFFFFF) {
        return 0;
    }
    if (*(unsigned int *)(D_0020FCAC + 0xA8) == 0xFFFFFFFF) {
        return 0;
    }
    if (func_130D20(1) == 0) {
        return 0;
    }
    if (((int (*)(int))func_130C60)(1) != 0) {
        return 1;
    }
    return *(unsigned int *)(D_0020FCAC + 0xA4) >= *(unsigned int *)(D_0020FCAC + 0xA8);
}
