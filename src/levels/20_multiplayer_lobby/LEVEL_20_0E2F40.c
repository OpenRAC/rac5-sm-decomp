/* LEVEL_20:0x0E2F40 -- placement copy of LEVEL_01_1333F0.c: when the global record exists and the start checks pass, restarts the record with state 8 and the new handle and reports 1, otherwise 0. */
extern char *D_0011721C;
extern unsigned char D_00117221;

void func_022740(void);
int func_080278(void);
int func_0E2860(int);
int func_0E2BE8(void);
int func_0B4D90(void);
void func_0E2CD8(void);
int func_0E33C8(void *);

int func_0E2F40(void *a0, void *a1)
{
    unsigned char saved;
    unsigned int r;

    func_022740();
    func_080278();
    if (!D_0011721C)
        return 0;
    if (func_0E2860(1))
        return 0;
    r = func_0E2BE8();
    if (r == 0xFFFFFFFFu)
        return 0;
    saved = D_00117221;
    D_00117221 = 0;
    func_0B4D90();
    func_0E2CD8();
    func_0E33C8(a1);
    *(int *)(D_0011721C + 4) = 8;
    *(int *)(D_0011721C + 0xC) = r;
    D_00117221 = saved;
    return 1;
}
