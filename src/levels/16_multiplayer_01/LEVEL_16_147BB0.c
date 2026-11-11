extern int func_147C70(float value);
extern int func_147E60(int handle);
extern void func_0732F8(int a, int b, int c, int d);
extern void func_05E8C0(int a, int b, int c, int d, int e);
extern char D_001BD968[];
extern char D_001D38F8[];

int func_147BB0(int param_1, int param_2)
{
    int ret;
    int obj;

    ret = func_147C70(1.0f);
    obj = func_147E60(ret);
    if (obj != 0) {
        *(int *)(obj + 0x44) = param_2;
        func_0732F8(param_2, obj + 0x48, 0, 0);
        *(void **)(obj + 0x40) = D_001BD968;
        func_05E8C0(obj + 4, (int)D_001BD968, param_1, obj + 0x48,
                      (int)D_001D38F8);
        *(int *)(obj + 0x68) = 3;
        *(float *)(obj + 0x60) = 15.0f;
    }
    return ret;
}
