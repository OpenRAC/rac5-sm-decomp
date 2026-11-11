/* LEVEL_20:0x0E3280 -- placement copy of FRONTEND_0210C0.c: checks a slot record's two sentinel fields and reports whether the second is not below the first. */
extern char *D_0011721C;
extern int func_0E2AA0(int a);
extern int func_0E2A60(int a);

int func_0E3280(void)
{
    if (D_0011721C == 0) {
        return 1;
    }
    if (*(unsigned int *)(D_0011721C + 0xA4) == 0xFFFFFFFF) {
        return 0;
    }
    if (*(unsigned int *)(D_0011721C + 0xA8) == 0xFFFFFFFF) {
        return 0;
    }
    if (func_0E2AA0(1) == 0) {
        return 0;
    }
    if (func_0E2A60(1) != 0) {
        return 1;
    }
    return *(unsigned int *)(D_0011721C + 0xA4) >= *(unsigned int *)(D_0011721C + 0xA8);
}
