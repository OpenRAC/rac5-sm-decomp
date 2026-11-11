extern int func_175078(float value);
extern int func_175268(int handle);
extern void func_083C10(int a, int b, int c, int d);
extern void func_06FAB8(int a, int b, int c, int d, int e);
extern char D_00220EE0[];
extern char D_00239FA8[];

int func_174FB8(int param_1, int param_2)
{
    int ret;
    int obj;

    ret = func_175078(1.0f);
    obj = func_175268(ret);
    if (obj != 0) {
        *(int *)(obj + 0x44) = param_2;
        func_083C10(param_2, obj + 0x48, 0, 0);
        *(void **)(obj + 0x40) = D_00220EE0;
        func_06FAB8(obj + 4, (int)D_00220EE0, param_1, obj + 0x48,
                      (int)D_00239FA8);
        *(int *)(obj + 0x68) = 3;
        *(float *)(obj + 0x60) = 15.0f;
    }
    return ret;
}
