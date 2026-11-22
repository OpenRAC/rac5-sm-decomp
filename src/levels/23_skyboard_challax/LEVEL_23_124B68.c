/* LEVEL_23:0x124B68 -- placement copy of LEVEL_01_1333F0.c: when the global record exists and the start checks pass, restarts the record with state 8 and the new handle and reports 1, otherwise 0. */
extern char *D_001DA44C;
extern unsigned char D_001DA451;

void func_025D90(void);
int func_09DD98(void);
int func_124370(int);
int func_1248A0(void);
int func_0D2050(void);
void func_1249A8(void);
int func_124FE8(void *);

int func_124B68(void *a0, void *a1)
{
    unsigned char saved;
    unsigned int r;

    func_025D90();
    func_09DD98();
    if (!D_001DA44C)
        return 0;
    if (func_124370(1))
        return 0;
    r = func_1248A0();
    if (r == 0xFFFFFFFFu)
        return 0;
    saved = D_001DA451;
    D_001DA451 = 0;
    func_0D2050();
    func_1249A8();
    func_124FE8(a1);
    *(int *)(D_001DA44C + 4) = 8;
    *(int *)(D_001DA44C + 0xC) = r;
    D_001DA451 = saved;
    return 1;
}
