/* LEVEL_04:0x1DE000 -- placement copy of LEVEL_01_1CA9B8.c: passes a word from a global record, shifted left 16 and OR'd with a constant, to two helpers at two fixed addresses. */
extern char D_003B3CC0[];
extern char D_00222760[];
extern char D_002B25C0[];
extern void func_1FD310(char *a0, unsigned int a1);
extern void func_1FC260(char *a0, unsigned int a1);

void func_1DE000(void)
{
    char *p;

    p = D_002B25C0;
    func_1FD310(D_003B3CC0, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
    func_1FC260(D_00222760, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
}
