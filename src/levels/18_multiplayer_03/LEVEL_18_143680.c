extern int func_143740(float value);
extern int func_143930(int handle);
extern void func_0729A8(int a, int b, int c, int d);
extern void func_05D3D0(int a, int b, int c, int d, int e);
extern char D_001BEDC8[];
extern char D_001D46B8[];

int func_143680(int param_1, int param_2)
{
    int ret;
    int obj;

    ret = func_143740(1.0f);
    obj = func_143930(ret);
    if (obj != 0) {
        *(int *)(obj + 0x44) = param_2;
        func_0729A8(param_2, obj + 0x48, 0, 0);
        *(void **)(obj + 0x40) = D_001BEDC8;
        func_05D3D0(obj + 4, (int)D_001BEDC8, param_1, obj + 0x48,
                      (int)D_001D46B8);
        *(int *)(obj + 0x68) = 3;
        *(float *)(obj + 0x60) = 15.0f;
    }
    return ret;
}
