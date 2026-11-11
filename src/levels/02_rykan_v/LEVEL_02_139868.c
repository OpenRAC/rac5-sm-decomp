extern char *D_0021C00C;
int func_138FA8(int);
int func_1394D8(void);
void func_0E1BB0(void);
void func_139C20(void *);

int func_139868(void *arg) {
    unsigned int result;
    if (!D_0021C00C)
        return 0;
    if (func_138FA8(1))
        return 0;
    result = func_1394D8();
    if (result == 0xFFFFFFFFu)
        return 0;
    func_0E1BB0();
    func_139C20(arg);
    *(int *)((char *)D_0021C00C + 4) = 9;
    *(int *)((char *)D_0021C00C + 0xC) = result;
    return 1;
}
