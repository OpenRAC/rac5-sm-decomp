extern int func_162A48(float value);
extern int func_162C38(int handle);
extern void func_080DE0(int a, int b, int c, int d);
extern void func_06D0F0(int a, int b, int c, int d, int e);
extern char D_00210310[];
extern char D_00228C38[];

int func_162988(int param_1, int param_2)
{
    int ret;
    int obj;

    ret = func_162A48(1.0f);
    obj = func_162C38(ret);
    if (obj != 0) {
        *(int *)(obj + 0x44) = param_2;
        func_080DE0(param_2, obj + 0x48, 0, 0);
        *(void **)(obj + 0x40) = D_00210310;
        func_06D0F0(obj + 4, (int)D_00210310, param_1, obj + 0x48,
                      (int)D_00228C38);
        *(int *)(obj + 0x68) = 3;
        *(float *)(obj + 0x60) = 15.0f;
    }
    return ret;
}
