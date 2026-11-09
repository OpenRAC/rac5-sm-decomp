/* LEVEL_07:0x1D6750 -- placement copy of LEVEL_01_1CA9B8.c: passes a word from a global record, shifted left 16 and OR'd with a constant, to two helpers at two fixed addresses. */
extern char D_003AE1C0[];
extern char D_0021DC10[];
extern char D_002AD6C0[];
extern void func_1F5AE8(char *a0, unsigned int a1);
extern void func_1F4A38(char *a0, unsigned int a1);

void func_1D6750(void)
{
    char *p;

    p = D_002AD6C0;
    func_1F5AE8(D_003AE1C0, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
    func_1F4A38(D_0021DC10, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
}
