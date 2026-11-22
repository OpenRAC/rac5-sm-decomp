/* LEVEL_19:0x1107F8 -- placement copy of LEVEL_01_1333F0.c: when the global record exists and the start checks pass, restarts the record with state 8 and the new handle and reports 1, otherwise 0. */
extern char *D_001B5CDC;
extern unsigned char D_001B5CE1;

void func_0257C8(void);
int func_095410(void);
int func_110118(int);
int func_1104A0(void);
int func_0CA138(void);
void func_110590(void);
int func_110C80(void *);

int func_1107F8(void *a0, void *a1)
{
    unsigned char saved;
    unsigned int r;

    func_0257C8();
    func_095410();
    if (!D_001B5CDC)
        return 0;
    if (func_110118(1))
        return 0;
    r = func_1104A0();
    if (r == 0xFFFFFFFFu)
        return 0;
    saved = D_001B5CE1;
    D_001B5CE1 = 0;
    func_0CA138();
    func_110590();
    func_110C80(a1);
    *(int *)(D_001B5CDC + 4) = 8;
    *(int *)(D_001B5CDC + 0xC) = r;
    D_001B5CE1 = saved;
    return 1;
}
