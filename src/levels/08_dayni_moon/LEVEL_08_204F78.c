/* LEVEL_08:0x204F78 -- placement copy of LEVEL_01_1CA9B8.c: passes a word from a global record, shifted left 16 and OR'd with a constant, to two helpers at two fixed addresses. */
extern char D_003EB208[];
extern char D_00252958[];
extern char D_002E7040[];
extern void func_228918(char *a0, unsigned int a1);
extern void func_227868(char *a0, unsigned int a1);

void func_204F78(void)
{
    char *p;

    p = D_002E7040;
    func_228918(D_003EB208, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
    func_227868(D_00252958, ((unsigned int)*(int *)(p + 0x2C) << 16) | 0xA00010C5u);
}
