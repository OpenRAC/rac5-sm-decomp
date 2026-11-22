/* LEVEL_22:0x10A8C0 -- placement copy of LEVEL_01_1333F0.c: when the global record exists and the start checks pass, restarts the record with state 8 and the new handle and reports 1, otherwise 0. */
extern char *D_0016602C;
extern unsigned char D_00166031;

void func_0228F8(void);
int func_095638(void);
int func_10A0C8(int);
int func_10A5F8(void);
int func_0C9760(void);
void func_10A700(void);
int func_10AD40(void *);

int func_10A8C0(void *a0, void *a1)
{
    unsigned char saved;
    unsigned int r;

    func_0228F8();
    func_095638();
    if (!D_0016602C)
        return 0;
    if (func_10A0C8(1))
        return 0;
    r = func_10A5F8();
    if (r == 0xFFFFFFFFu)
        return 0;
    saved = D_00166031;
    D_00166031 = 0;
    func_0C9760();
    func_10A700();
    func_10AD40(a1);
    *(int *)(D_0016602C + 4) = 8;
    *(int *)(D_0016602C + 0xC) = r;
    D_00166031 = saved;
    return 1;
}
