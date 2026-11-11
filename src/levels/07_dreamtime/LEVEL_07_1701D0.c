extern int func_170290(float value);
extern int func_170480(int handle);
extern void func_082918(int a, int b, int c, int d);
extern void func_06ED58(int a, int b, int c, int d, int e);
extern char D_0021BC18[];
extern char D_00235478[];

int func_1701D0(int param_1, int param_2)
{
    int ret;
    int obj;

    ret = func_170290(1.0f);
    obj = func_170480(ret);
    if (obj != 0) {
        *(int *)(obj + 0x44) = param_2;
        func_082918(param_2, obj + 0x48, 0, 0);
        *(void **)(obj + 0x40) = D_0021BC18;
        func_06ED58(obj + 4, (int)D_0021BC18, param_1, obj + 0x48,
                      (int)D_00235478);
        *(int *)(obj + 0x68) = 3;
        *(float *)(obj + 0x60) = 15.0f;
    }
    return ret;
}
