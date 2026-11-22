/* LEVEL_02:0x1397A0 -- placement copy of LEVEL_01_1333F0.c: when the global record exists and the start checks pass, restarts the record with state 8 and the new handle and reports 1, otherwise 0. */
extern char *D_0021C00C;
extern unsigned char D_0021C011;

void func_028820(void);
int func_0AD938(void);
int func_138FA8(int);
int func_1394D8(void);
int func_0E1BB0(void);
void func_1395E0(void);
int func_139C20(void *);

int func_1397A0(void *a0, void *a1)
{
    unsigned char saved;
    unsigned int r;

    func_028820();
    func_0AD938();
    if (!D_0021C00C)
        return 0;
    if (func_138FA8(1))
        return 0;
    r = func_1394D8();
    if (r == 0xFFFFFFFFu)
        return 0;
    saved = D_0021C011;
    D_0021C011 = 0;
    func_0E1BB0();
    func_1395E0();
    func_139C20(a1);
    *(int *)(D_0021C00C + 4) = 8;
    *(int *)(D_0021C00C + 0xC) = r;
    D_0021C011 = saved;
    return 1;
}
