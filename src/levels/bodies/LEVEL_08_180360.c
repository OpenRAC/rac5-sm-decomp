extern int func_180420(float value);
extern int func_180610(int handle);
extern void func_088720(int a, int b, int c, int d);
extern void func_073720(int a, int b, int c, int d, int e);
extern char D_002509C8[];
extern char D_0026B338[];

int func_180360(int param_1, int param_2)
{
    int ret;
    int obj;

    ret = func_180420(1.0f);
    obj = func_180610(ret);
    if (obj != 0) {
        *(int *)(obj + 0x44) = param_2;
        func_088720(param_2, obj + 0x48, 0, 0);
        *(void **)(obj + 0x40) = D_002509C8;
        func_073720(obj + 4, (int)D_002509C8, param_1, obj + 0x48,
                      (int)D_0026B338);
        *(int *)(obj + 0x68) = 3;
        *(float *)(obj + 0x60) = 15.0f;
    }
    return ret;
}
