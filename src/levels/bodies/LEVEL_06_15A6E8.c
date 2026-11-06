extern int func_15A7A8(float value);
extern int func_15A998(int handle);
extern void func_07A390(int a, int b, int c, int d);
extern void func_06AC98(int a, int b, int c, int d, int e);
extern char D_001F6290[];
extern char D_0020E610[];

int func_15A6E8(int param_1, int param_2)
{
    int ret;
    int obj;

    ret = func_15A7A8(1.0f);
    obj = func_15A998(ret);
    if (obj != 0) {
        *(int *)(obj + 0x44) = param_2;
        func_07A390(param_2, obj + 0x48, 0, 0);
        *(void **)(obj + 0x40) = D_001F6290;
        func_06AC98(obj + 4, (int)D_001F6290, param_1, obj + 0x48,
                      (int)D_0020E610);
        *(int *)(obj + 0x68) = 3;
        *(float *)(obj + 0x60) = 15.0f;
    }
    return ret;
}
