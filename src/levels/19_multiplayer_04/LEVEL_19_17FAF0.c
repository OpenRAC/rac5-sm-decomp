/* LEVEL_19:0x17FAF0 -- placement copy of LEVEL_01_1CA9B8.c: passes a word from a global record, shifted left 16 and OR'd with a constant, to two helpers at two fixed addresses. */
extern char D_002E5DE8[];
extern char D_001BF610[];
extern char D_0024E3C0[];
extern void func_195860(char *a0, unsigned int a1);
extern void func_1947B0(char *a0, unsigned int a1);

void func_17FAF0(void)
{
    char *p;

    p = D_0024E3C0;
    func_195860(D_002E5DE8, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
    func_1947B0(D_001BF610, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
}
