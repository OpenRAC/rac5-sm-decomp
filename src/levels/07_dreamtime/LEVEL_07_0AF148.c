extern int func_0A5CF0(void *p);
extern int func_0A5D20(void *p);
extern void func_0AEF28(void *p, short a, short b, short c, short d,
                        int z1, int z2, int u, int v, int w);

void func_000AD148(void *param_1, short param_2, short param_3, short param_4,
                   short param_5, int param_6)
{
    int uVar1 = func_0A5CF0(param_1);
    int v = func_0A5D20(param_1);

    func_0AEF28(param_1, param_2, param_3, param_4, param_5, 0, 0, uVar1, v,
                param_6);
}
