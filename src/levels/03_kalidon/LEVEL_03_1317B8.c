/* LEVEL_03:0x1317B8 -- placement copy of LEVEL_01_1333F0.c: when the global record exists and the start checks pass, restarts the record with state 8 and the new handle and reports 1, otherwise 0. */
extern char *D_0021F6CC;
extern unsigned char D_0021F6D1;

void func_027F18(void);
int func_0A6DA8(void);
int func_130FC0(int);
int func_1314F0(void);
int func_0DB008(void);
void func_1315F8(void);
int func_131C38(void *);

int func_1317B8(void *a0, void *a1)
{
    unsigned char saved;
    unsigned int r;

    func_027F18();
    func_0A6DA8();
    if (!D_0021F6CC)
        return 0;
    if (func_130FC0(1))
        return 0;
    r = func_1314F0();
    if (r == 0xFFFFFFFFu)
        return 0;
    saved = D_0021F6D1;
    D_0021F6D1 = 0;
    func_0DB008();
    func_1315F8();
    func_131C38(a1);
    *(int *)(D_0021F6CC + 4) = 8;
    *(int *)(D_0021F6CC + 0xC) = r;
    D_0021F6D1 = saved;
    return 1;
}
