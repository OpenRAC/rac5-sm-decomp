/* LEVEL_09:0x1B0ED8 -- placement copy of LEVEL_01_1CA9B8.c: passes a word from a global record, shifted left 16 and OR'd with a constant, to two helpers at two fixed addresses. */
extern char D_0037FFB8[];
extern char D_001F2BB8[];
extern char D_0027F540[];
extern void func_1CD8D8(char *a0, unsigned int a1);
extern void func_1CC828(char *a0, unsigned int a1);

void func_1B0ED8(void)
{
    char *p;

    p = D_0027F540;
    func_1CD8D8(D_0037FFB8, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
    func_1CC828(D_001F2BB8, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
}
