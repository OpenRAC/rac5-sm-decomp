extern int func_16B450(float value);
extern int func_16B640(int handle);
extern void func_0807B0(int a, int b, int c, int d);
extern void func_06DED8(int a, int b, int c, int d, int e);
extern char D_002076D8[];
extern char D_00220690[];

int func_16B390(int param_1, int param_2)
{
    int ret;
    int obj;

    ret = func_16B450(1.0f);
    obj = func_16B640(ret);
    if (obj != 0) {
        *(int *)(obj + 0x44) = param_2;
        func_0807B0(param_2, obj + 0x48, 0, 0);
        *(void **)(obj + 0x40) = D_002076D8;
        func_06DED8(obj + 4, (int)D_002076D8, param_1, obj + 0x48,
                      (int)D_00220690);
        *(int *)(obj + 0x68) = 3;
        *(float *)(obj + 0x60) = 15.0f;
    }
    return ret;
}
