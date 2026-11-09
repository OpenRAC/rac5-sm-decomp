/* LEVEL_18:0x183490 -- placement copy of LEVEL_01_1CA9B8.c: passes a word from a global record, shifted left 16 and OR'd with a constant, to two helpers at two fixed addresses. */
extern char D_002E5BB0[];
extern char D_001BF930[];
extern char D_0024E5C0[];
extern void func_1969E8(char *a0, unsigned int a1);
extern void func_195938(char *a0, unsigned int a1);

void func_183490(void)
{
    char *p;

    p = D_0024E5C0;
    func_1969E8(D_002E5BB0, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
    func_195938(D_001BF930, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
}
