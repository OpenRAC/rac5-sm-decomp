extern int func_17F000(float value);
extern int func_17F1F0(int handle);
extern void func_087080(int a, int b, int c, int d);
extern void func_073358(int a, int b, int c, int d, int e);
extern char D_0021C828[];
extern char D_00237838[];

int func_17EF40(int param_1, int param_2)
{
    int ret;
    int obj;

    ret = func_17F000(1.0f);
    obj = func_17F1F0(ret);
    if (obj != 0) {
        *(int *)(obj + 0x44) = param_2;
        func_087080(param_2, obj + 0x48, 0, 0);
        *(void **)(obj + 0x40) = D_0021C828;
        func_073358(obj + 4, (int)D_0021C828, param_1, obj + 0x48,
                      (int)D_00237838);
        *(int *)(obj + 0x68) = 3;
        *(float *)(obj + 0x60) = 15.0f;
    }
    return ret;
}
