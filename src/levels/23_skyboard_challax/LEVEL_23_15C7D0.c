extern int func_15C890(float value);
extern int func_15CA80(int handle);
extern void func_077BB0(int a, int b, int c, int d);
extern void func_067680(int a, int b, int c, int d, int e);
extern char D_001DAE08[];
extern char D_001F2748[];

int func_15C7D0(int param_1, int param_2)
{
    int ret;
    int obj;

    ret = func_15C890(1.0f);
    obj = func_15CA80(ret);
    if (obj != 0) {
        *(int *)(obj + 0x44) = param_2;
        func_077BB0(param_2, obj + 0x48, 0, 0);
        *(void **)(obj + 0x40) = D_001DAE08;
        func_067680(obj + 4, (int)D_001DAE08, param_1, obj + 0x48,
                      (int)D_001F2748);
        *(int *)(obj + 0x68) = 3;
        *(float *)(obj + 0x60) = 15.0f;
    }
    return ret;
}
