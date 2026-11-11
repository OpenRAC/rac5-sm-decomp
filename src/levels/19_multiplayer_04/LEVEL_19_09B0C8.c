extern int func_0926F0(void *p);
extern int func_092720(void *p);
extern void func_09AEA8(void *p, short a, short b, short c, short d,
                        int z1, int z2, int u, int v, int w);

void func_000AD148(void *param_1, short param_2, short param_3, short param_4,
                   short param_5, int param_6)
{
    int uVar1 = func_0926F0(param_1);
    int v = func_092720(param_1);

    func_09AEA8(param_1, param_2, param_3, param_4, param_5, 0, 0, uVar1, v,
                param_6);
}
