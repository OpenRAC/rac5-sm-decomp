/* FRONTEND:0x0210C0 -- checks a slot record's two sentinel fields and reports whether the second is not below the first. */
extern char *D_00032814;
extern int func_020890(int a);
extern int func_0207D0(int a);

int func_0210C0(void)
{
    if (D_00032814 == 0) {
        return 1;
    }
    if (*(unsigned int *)(D_00032814 + 0xA4) == 0xFFFFFFFF) {
        return 0;
    }
    if (*(unsigned int *)(D_00032814 + 0xA8) == 0xFFFFFFFF) {
        return 0;
    }
    if (func_020890(1) == 0) {
        return 0;
    }
    if (func_0207D0(1) != 0) {
        return 1;
    }
    return *(unsigned int *)(D_00032814 + 0xA4) >= *(unsigned int *)(D_00032814 + 0xA8);
}
