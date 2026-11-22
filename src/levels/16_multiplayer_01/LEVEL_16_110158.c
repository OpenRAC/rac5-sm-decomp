/* LEVEL_16:0x110158 -- placement copy of LEVEL_01_1333F0.c: when the global record exists and the start checks pass, restarts the record with state 8 and the new handle and reports 1, otherwise 0. */
extern char *D_001B4B5C;
extern unsigned char D_001B4B61;

void func_025C20(void);
int func_095B80(void);
int func_10FA78(int);
int func_10FE00(void);
int func_0CA860(void);
void func_10FEF0(void);
int func_1105E0(void *);

int func_110158(void *a0, void *a1)
{
    unsigned char saved;
    unsigned int r;

    func_025C20();
    func_095B80();
    if (!D_001B4B5C)
        return 0;
    if (func_10FA78(1))
        return 0;
    r = func_10FE00();
    if (r == 0xFFFFFFFFu)
        return 0;
    saved = D_001B4B61;
    D_001B4B61 = 0;
    func_0CA860();
    func_10FEF0();
    func_1105E0(a1);
    *(int *)(D_001B4B5C + 4) = 8;
    *(int *)(D_001B4B5C + 0xC) = r;
    D_001B4B61 = saved;
    return 1;
}
