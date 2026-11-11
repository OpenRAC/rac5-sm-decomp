extern int func_144AE8(float value);
extern int func_144CD8(int handle);
extern void func_073440(int a, int b, int c, int d);
extern void func_05DCE0(int a, int b, int c, int d, int e);
extern char D_001BEAB8[];
extern char D_001D43B0[];

int func_144A28(int param_1, int param_2)
{
    int ret;
    int obj;

    ret = func_144AE8(1.0f);
    obj = func_144CD8(ret);
    if (obj != 0) {
        *(int *)(obj + 0x44) = param_2;
        func_073440(param_2, obj + 0x48, 0, 0);
        *(void **)(obj + 0x40) = D_001BEAB8;
        func_05DCE0(obj + 4, (int)D_001BEAB8, param_1, obj + 0x48,
                      (int)D_001D43B0);
        *(int *)(obj + 0x68) = 3;
        *(float *)(obj + 0x60) = 15.0f;
    }
    return ret;
}
