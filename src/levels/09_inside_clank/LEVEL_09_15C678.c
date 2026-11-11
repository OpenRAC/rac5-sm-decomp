extern int func_15C738(float value);
extern int func_15C928(int handle);
extern void func_07D230(int a, int b, int c, int d);
extern void func_06AAD8(int a, int b, int c, int d, int e);
extern char D_001F1190[];
extern char D_00209380[];

int func_15C678(int param_1, int param_2)
{
    int ret;
    int obj;

    ret = func_15C738(1.0f);
    obj = func_15C928(ret);
    if (obj != 0) {
        *(int *)(obj + 0x44) = param_2;
        func_07D230(param_2, obj + 0x48, 0, 0);
        *(void **)(obj + 0x40) = D_001F1190;
        func_06AAD8(obj + 4, (int)D_001F1190, param_1, obj + 0x48,
                      (int)D_00209380);
        *(int *)(obj + 0x68) = 3;
        *(float *)(obj + 0x60) = 15.0f;
    }
    return ret;
}
