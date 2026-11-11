/* LEVEL_02:0x1DFAD8 -- placement copy of LEVEL_01_1CA9B8.c: passes a word from a global record, shifted left 16 and OR'd with a constant, to two helpers at two fixed addresses. */
extern char D_003B0738[];
extern char D_0021DF20[];
extern char D_002AF2C0[];
extern void func_1F9E08(char *a0, unsigned int a1);
extern void func_1F8D58(char *a0, unsigned int a1);

void func_1DFAD8(void)
{
    char *p;

    p = D_002AF2C0;
    func_1F9E08(D_003B0738, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
    func_1F8D58(D_0021DF20, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
}
