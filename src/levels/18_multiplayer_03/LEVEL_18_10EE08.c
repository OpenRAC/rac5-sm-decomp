/* LEVEL_18:0x10EE08 -- placement copy of LEVEL_01_1333F0.c: when the global record exists and the start checks pass, restarts the record with state 8 and the new handle and reports 1, otherwise 0. */
extern char *D_001B5FDC;
extern unsigned char D_001B5FE1;

void func_0251D0(void);
int func_094B90(void);
int func_10E728(int);
int func_10EAB0(void);
int func_0C9838(void);
void func_10EBA0(void);
int func_10F290(void *);

int func_10EE08(void *a0, void *a1)
{
    unsigned char saved;
    unsigned int r;

    func_0251D0();
    func_094B90();
    if (!D_001B5FDC)
        return 0;
    if (func_10E728(1))
        return 0;
    r = func_10EAB0();
    if (r == 0xFFFFFFFFu)
        return 0;
    saved = D_001B5FE1;
    D_001B5FE1 = 0;
    func_0C9838();
    func_10EBA0();
    func_10F290(a1);
    *(int *)(D_001B5FDC + 4) = 8;
    *(int *)(D_001B5FDC + 0xC) = r;
    D_001B5FE1 = saved;
    return 1;
}
