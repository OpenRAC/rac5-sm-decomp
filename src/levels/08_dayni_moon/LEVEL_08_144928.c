/* LEVEL_08:0x144928 -- placement copy of LEVEL_01_1333F0.c: when the global record exists and the start checks pass, restarts the record with state 8 and the new handle and reports 1, otherwise 0. */
extern char *D_0024FF0C;
extern unsigned char D_0024FF11;

void func_028660(void);
int func_0B1920(void);
int func_144130(int);
int func_144660(void);
int func_0E61F0(void);
void func_144768(void);
int func_144DA8(void *);

int func_144928(void *a0, void *a1)
{
    unsigned char saved;
    unsigned int r;

    func_028660();
    func_0B1920();
    if (!D_0024FF0C)
        return 0;
    if (func_144130(1))
        return 0;
    r = func_144660();
    if (r == 0xFFFFFFFFu)
        return 0;
    saved = D_0024FF11;
    D_0024FF11 = 0;
    func_0E61F0();
    func_144768();
    func_144DA8(a1);
    *(int *)(D_0024FF0C + 4) = 8;
    *(int *)(D_0024FF0C + 0xC) = r;
    D_0024FF11 = saved;
    return 1;
}
