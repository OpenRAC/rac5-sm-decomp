/* LEVEL_10:0x1CE418 -- placement copy of LEVEL_01_1CA9B8.c: passes a word from a global record, shifted left 16 and OR'd with a constant, to two helpers at two fixed addresses. */
extern char D_003A1ED8[];
extern char D_00211F40[];
extern char D_002A11C0[];
extern void func_1ECAC8(char *a0, unsigned int a1);
extern void func_1EBA18(char *a0, unsigned int a1);

void func_1CE418(void)
{
    char *p;

    p = D_002A11C0;
    func_1ECAC8(D_003A1ED8, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
    func_1EBA18(D_00211F40, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
}
