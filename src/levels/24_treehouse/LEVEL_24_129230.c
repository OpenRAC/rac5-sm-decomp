/* LEVEL_24:0x129230 -- placement copy of LEVEL_01_133730.c: placement copy of FRONTEND_0210C0.c: checks a slot record's two sentinel fields and reports whether the second is not below the first. */
extern char *D_001D7CCC;
extern int func_1289C0(int a);
extern int func_128900(void);

int func_129230(void)
{
    if (D_001D7CCC == 0) {
        return 1;
    }
    if (*(unsigned int *)(D_001D7CCC + 0xA4) == 0xFFFFFFFF) {
        return 0;
    }
    if (*(unsigned int *)(D_001D7CCC + 0xA8) == 0xFFFFFFFF) {
        return 0;
    }
    if (func_1289C0(1) == 0) {
        return 0;
    }
    if (((int (*)(int))func_128900)(1) != 0) {
        return 1;
    }
    return *(unsigned int *)(D_001D7CCC + 0xA4) >= *(unsigned int *)(D_001D7CCC + 0xA8);
}
