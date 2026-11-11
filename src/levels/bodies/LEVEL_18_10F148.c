/* LEVEL_18:0x10F148 -- placement copy of FRONTEND_0210C0.c: checks a slot record's two sentinel fields and reports whether the second is not below the first. */
extern char *D_001B5FDC;
extern int func_10E968(int a);
extern int func_10E928(int a);

int func_10F148(void)
{
    if (D_001B5FDC == 0) {
        return 1;
    }
    if (*(unsigned int *)(D_001B5FDC + 0xA4) == 0xFFFFFFFF) {
        return 0;
    }
    if (*(unsigned int *)(D_001B5FDC + 0xA8) == 0xFFFFFFFF) {
        return 0;
    }
    if (func_10E968(1) == 0) {
        return 0;
    }
    if (func_10E928(1) != 0) {
        return 1;
    }
    return *(unsigned int *)(D_001B5FDC + 0xA4) >= *(unsigned int *)(D_001B5FDC + 0xA8);
}
