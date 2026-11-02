extern char *D_0021F6CC;
int func_130FC0(int);
int func_1314F0(void);
void func_0DB008(void);
void func_131C38(void *);

int func_131880(void *arg) {
    unsigned int result;
    if (!D_0021F6CC)
        return 0;
    if (func_130FC0(1))
        return 0;
    result = func_1314F0();
    if (result == 0xFFFFFFFFu)
        return 0;
    func_0DB008();
    func_131C38(arg);
    *(int *)((char *)D_0021F6CC + 4) = 9;
    *(int *)((char *)D_0021F6CC + 0xC) = result;
    return 1;
}
