/* LEVEL_06:0x129AC0 -- placement copy of LEVEL_01_1333F0.c: when the global record exists and the start checks pass, restarts the record with state 8 and the new handle and reports 1, otherwise 0. */
extern char *D_001F5C4C;
extern unsigned char D_001F5C51;

void func_0265E8(void);
int func_0A17F8(void);
int func_1292C8(int);
int func_1297F8(void);
int func_0D5B20(void);
void func_129900(void);
int func_129F40(void *);

int func_129AC0(void *a0, void *a1)
{
    unsigned char saved;
    unsigned int r;

    func_0265E8();
    func_0A17F8();
    if (!D_001F5C4C)
        return 0;
    if (func_1292C8(1))
        return 0;
    r = func_1297F8();
    if (r == 0xFFFFFFFFu)
        return 0;
    saved = D_001F5C51;
    D_001F5C51 = 0;
    func_0D5B20();
    func_129900();
    func_129F40(a1);
    *(int *)(D_001F5C4C + 4) = 8;
    *(int *)(D_001F5C4C + 0xC) = r;
    D_001F5C51 = saved;
    return 1;
}
