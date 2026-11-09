/* LEVEL_16:0x182E58 -- placement copy of LEVEL_01_1CA9B8.c: passes a word from a global record, shifted left 16 and OR'd with a constant, to two helpers at two fixed addresses. */
extern char D_002E5C40[];
extern char D_001BE408[];
extern char D_0024E240[];
extern void func_195548(char *a0, unsigned int a1);
extern void func_194498(char *a0, unsigned int a1);

void func_182E58(void)
{
    char *p;

    p = D_0024E240;
    func_195548(D_002E5C40, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
    func_194498(D_001BE408, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
}
