/* LEVEL_05:0x1B9DC8 -- placement copy of LEVEL_01_1CA9B8.c: passes a word from a global record, shifted left 16 and OR'd with a constant, to two helpers at two fixed addresses. */
extern char D_0038FB60[];
extern char D_001F7F40[];
extern char D_00283C80[];
extern void func_1D4568(char *a0, unsigned int a1);
extern void func_1D34B8(char *a0, unsigned int a1);

void func_1B9DC8(void)
{
    char *p;

    p = D_00283C80;
    func_1D4568(D_0038FB60, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
    func_1D34B8(D_001F7F40, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
}
