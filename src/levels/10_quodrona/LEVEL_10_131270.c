/* LEVEL_10:0x131270 -- placement copy of LEVEL_01_1333F0.c: when the global record exists and the start checks pass, restarts the record with state 8 and the new handle and reports 1, otherwise 0. */
extern char *D_0020FCAC;
extern unsigned char D_0020FCB1;

void func_027918(void);
int func_0A8140(void);
int func_130A58(int);
int func_130F88(void);
int func_0DC660(void);
void func_1310B0(void);
int func_1316F0(void *);

int func_131270(void *a0, void *a1)
{
    unsigned char saved;
    unsigned int r;

    func_027918();
    func_0A8140();
    if (!D_0020FCAC)
        return 0;
    if (func_130A58(1))
        return 0;
    r = func_130F88();
    if (r == 0xFFFFFFFFu)
        return 0;
    saved = D_0020FCB1;
    D_0020FCB1 = 0;
    func_0DC660();
    func_1310B0();
    func_1316F0(a1);
    *(int *)(D_0020FCAC + 4) = 8;
    *(int *)(D_0020FCAC + 0xC) = r;
    D_0020FCB1 = saved;
    return 1;
}
