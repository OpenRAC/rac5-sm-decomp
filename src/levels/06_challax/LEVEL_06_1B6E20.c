/* LEVEL_06:0x1B6E20 -- placement copy of LEVEL_01_1CA9B8.c: passes a word from a global record, shifted left 16 and OR'd with a constant, to two helpers at two fixed addresses. */
extern char D_003851F0[];
extern char D_001F7E88[];
extern char D_00284B40[];
extern void func_1D29B8(char *a0, unsigned int a1);
extern void func_1D1908(char *a0, unsigned int a1);

void func_1B6E20(void)
{
    char *p;

    p = D_00284B40;
    func_1D29B8(D_003851F0, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
    func_1D1908(D_001F7E88, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
}
