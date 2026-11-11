extern int func_166A48(float value);
extern int func_166C38(int handle);
extern void func_080590(int a, int b, int c, int d);
extern void func_06C860(int a, int b, int c, int d, int e);
extern char D_0021FD68[];
extern char D_00239608[];

int func_166988(int param_1, int param_2)
{
    int ret;
    int obj;

    ret = func_166A48(1.0f);
    obj = func_166C38(ret);
    if (obj != 0) {
        *(int *)(obj + 0x44) = param_2;
        func_080590(param_2, obj + 0x48, 0, 0);
        *(void **)(obj + 0x40) = D_0021FD68;
        func_06C860(obj + 4, (int)D_0021FD68, param_1, obj + 0x48,
                      (int)D_00239608);
        *(int *)(obj + 0x68) = 3;
        *(float *)(obj + 0x60) = 15.0f;
    }
    return ret;
}
