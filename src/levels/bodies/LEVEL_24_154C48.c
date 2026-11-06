extern int func_154D08(float value);
extern int func_154EF8(int handle);
extern void func_07AE90(int a, int b, int c, int d);
extern void func_067518(int a, int b, int c, int d, int e);
extern char D_001D85F8[];
extern char D_001EF990[];

int func_154C48(int param_1, int param_2)
{
    int ret;
    int obj;

    ret = func_154D08(1.0f);
    obj = func_154EF8(ret);
    if (obj != 0) {
        *(int *)(obj + 0x44) = param_2;
        func_07AE90(param_2, obj + 0x48, 0, 0);
        *(void **)(obj + 0x40) = D_001D85F8;
        func_067518(obj + 4, (int)D_001D85F8, param_1, obj + 0x48,
                      (int)D_001EF990);
        *(int *)(obj + 0x68) = 3;
        *(float *)(obj + 0x60) = 15.0f;
    }
    return ret;
}
