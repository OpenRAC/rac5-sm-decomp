/* LEVEL_23:0x124EA8 -- placement copy of LEVEL_01_133730.c: placement copy of FRONTEND_0210C0.c: checks a slot record's two sentinel fields and reports whether the second is not below the first. */
extern char *D_001DA44C;
extern int func_124638(void);
extern int func_124578(void);

int func_124EA8(void)
{
    if (D_001DA44C == 0) {
        return 1;
    }
    if (*(unsigned int *)(D_001DA44C + 0xA4) == 0xFFFFFFFF) {
        return 0;
    }
    if (*(unsigned int *)(D_001DA44C + 0xA8) == 0xFFFFFFFF) {
        return 0;
    }
    if (((int (*)(int))func_124638)(1) == 0) {
        return 0;
    }
    if (((int (*)(int))func_124578)(1) != 0) {
        return 1;
    }
    return *(unsigned int *)(D_001DA44C + 0xA4) >= *(unsigned int *)(D_001DA44C + 0xA8);
}
