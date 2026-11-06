extern int func_143680(float value);
extern int func_143870(int handle);
extern void func_073A28(int a, int b, int c, int d);
extern void func_05E2B0(int a, int b, int c, int d, int e);
extern char D_001B0F30[];
extern char D_001C62F8[];

int func_1435C0(int param_1, int param_2)
{
    int ret;
    int obj;

    ret = func_143680(1.0f);
    obj = func_143870(ret);
    if (obj != 0) {
        *(int *)(obj + 0x44) = param_2;
        func_073A28(param_2, obj + 0x48, 0, 0);
        *(void **)(obj + 0x40) = D_001B0F30;
        func_05E2B0(obj + 4, (int)D_001B0F30, param_1, obj + 0x48,
                      (int)D_001C62F8);
        *(int *)(obj + 0x68) = 3;
        *(float *)(obj + 0x60) = 15.0f;
    }
    return ret;
}
