extern int func_15E510(float value);
extern int func_15E700(int handle);
extern void func_07DE50(int a, int b, int c, int d);
extern void func_06BB40(int a, int b, int c, int d, int e);
extern char D_001F6770[];
extern char D_0020E408[];

int func_15E450(int param_1, int param_2)
{
    int ret;
    int obj;

    ret = func_15E510(1.0f);
    obj = func_15E700(ret);
    if (obj != 0) {
        *(int *)(obj + 0x44) = param_2;
        func_07DE50(param_2, obj + 0x48, 0, 0);
        *(void **)(obj + 0x40) = D_001F6770;
        func_06BB40(obj + 4, (int)D_001F6770, param_1, obj + 0x48,
                      (int)D_0020E408);
        *(int *)(obj + 0x68) = 3;
        *(float *)(obj + 0x60) = 15.0f;
    }
    return ret;
}
