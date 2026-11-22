/* LEVEL_21:0x0F22B8 -- placement copy of LEVEL_01_1333F0.c: when the global record exists and the start checks pass, restarts the record with state 8 and the new handle and reports 1, otherwise 0. */
extern char *D_0015B9AC;
extern unsigned char D_0015B9B1;

void func_021F18(void);
int func_0878F0(void);
int func_0F1AC0(int);
int func_0F1FF0(void);
int func_0BB860(void);
void func_0F20F8(void);
int func_0F2738(void *);

int func_0F22B8(void *a0, void *a1)
{
    unsigned char saved;
    unsigned int r;

    func_021F18();
    func_0878F0();
    if (!D_0015B9AC)
        return 0;
    if (func_0F1AC0(1))
        return 0;
    r = func_0F1FF0();
    if (r == 0xFFFFFFFFu)
        return 0;
    saved = D_0015B9B1;
    D_0015B9B1 = 0;
    func_0BB860();
    func_0F20F8();
    func_0F2738(a1);
    *(int *)(D_0015B9AC + 4) = 8;
    *(int *)(D_0015B9AC + 0xC) = r;
    D_0015B9B1 = saved;
    return 1;
}
