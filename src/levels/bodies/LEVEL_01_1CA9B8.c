/* LEVEL_01:0x1CA9B8 -- passes a word from a global record, shifted left 16 and OR'd with a constant, to two helpers at two fixed addresses. */
extern char D_003987D0[];
extern char D_00208FC8[];
extern char D_00297DC0[];
extern void func_1E5170(char *a0, unsigned int a1);
extern void func_1E40C0(char *a0, unsigned int a1);

void func_1CA9B8(void)
{
    char *p;

    p = D_00297DC0;
    func_1E5170(D_003987D0, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
    func_1E40C0(D_00208FC8, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
}
