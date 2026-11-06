extern int func_09AA30(void *p);
extern int func_09AA60(void *p);
extern void func_0A3C98(void *p, short a, short b, short c, short d,
                        int z1, int z2, int u, int v, int w);

void func_000AD148(void *param_1, short param_2, short param_3, short param_4,
                   short param_5, int param_6)
{
    int uVar1 = func_09AA30(param_1);
    int v = func_09AA60(param_1);

    func_0A3C98(param_1, param_2, param_3, param_4, param_5, 0, 0, uVar1, v,
                param_6);
}
