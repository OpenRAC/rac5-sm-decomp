extern char *D_00032814;
int func_0205B8(int);
int func_020AE8(void);
void func_003E10(void);
void func_021210(void *);

int func_020EE0(void *arg) {
    unsigned int result;
    if (!D_00032814)
        return 0;
    if (func_0205B8(1))
        return 0;
    result = func_020AE8();
    if (result == 0xFFFFFFFFu)
        return 0;
    func_003E10();
    func_021210(arg);
    *(int *)((char *)D_00032814 + 4) = 13;
    *(int *)((char *)D_00032814 + 0xC) = result;
    return 1;
}
