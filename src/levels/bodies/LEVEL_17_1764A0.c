/* LEVEL_17:0x1764A0 -- placement copy of LEVEL_01_1CA9B8.c: passes a word from a global record, shifted left 16 and OR'd with a constant, to two helpers at two fixed addresses. */
extern char D_002D6E30[];
extern char D_001B18E0[];
extern char D_0023F540[];
extern void func_188B90(char *a0, unsigned int a1);
extern void func_187AE0(char *a0, unsigned int a1);

void func_1764A0(void)
{
    char *p;

    p = D_0023F540;
    func_188B90(D_002D6E30, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
    func_187AE0(D_001B18E0, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
}
