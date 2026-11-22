/* LEVEL_07:0x1363F0 -- placement copy of LEVEL_01_1333F0.c: when the global record exists and the start checks pass, restarts the record with state 8 and the new handle and reports 1, otherwise 0. */
extern char *D_0021B34C;
extern unsigned char D_0021B351;

void func_028398(void);
int func_0A9028(void);
int func_135BF8(int);
int func_136128(void);
int func_0DD280(void);
void func_136230(void);
int func_136870(void *);

int func_1363F0(void *a0, void *a1)
{
    unsigned char saved;
    unsigned int r;

    func_028398();
    func_0A9028();
    if (!D_0021B34C)
        return 0;
    if (func_135BF8(1))
        return 0;
    r = func_136128();
    if (r == 0xFFFFFFFFu)
        return 0;
    saved = D_0021B351;
    D_0021B351 = 0;
    func_0DD280();
    func_136230();
    func_136870(a1);
    *(int *)(D_0021B34C + 4) = 8;
    *(int *)(D_0021B34C + 0xC) = r;
    D_0021B351 = saved;
    return 1;
}
