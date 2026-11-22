/* LEVEL_01:0x1333F0 -- when the global record exists and the start checks pass, restarts the record with state 8 and the new handle and reports 1, otherwise 0. */
extern char *D_0020704C;
extern unsigned char D_00207051;

void func_028038(void);
int func_0A7028(void);
int func_132BF8(int);
int func_133128(void);
int func_0DB220(void);
void func_133230(void);
int func_133870(void *);

int func_1333F0(void *a0, void *a1)
{
    unsigned char saved;
    unsigned int r;

    func_028038();
    func_0A7028();
    if (!D_0020704C)
        return 0;
    if (func_132BF8(1))
        return 0;
    r = func_133128();
    if (r == 0xFFFFFFFFu)
        return 0;
    saved = D_00207051;
    D_00207051 = 0;
    func_0DB220();
    func_133230();
    func_133870(a1);
    *(int *)(D_0020704C + 4) = 8;
    *(int *)(D_0020704C + 0xC) = r;
    D_00207051 = saved;
    return 1;
}
