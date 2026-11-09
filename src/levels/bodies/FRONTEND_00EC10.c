/* FRONTEND:0x00EC10 -- placement copy of LEVEL_01_0AD148.c. */
extern int func_008AF8(int p);
extern int func_008B28(int p);
extern void func_00EA70(void *p, short a, short b, short c, short d,
                        int z1, int z2, int u, int v, int w);

void func_0000EC10(void *param_1, short param_2, short param_3, short param_4,
                   short param_5, int param_6)
{
    int uVar1 = func_008AF8((int)param_1);
    int v = func_008B28((int)param_1);

    func_00EA70(param_1, param_2, param_3, param_4, param_5, 0, 0, uVar1, v,
                param_6);
}
