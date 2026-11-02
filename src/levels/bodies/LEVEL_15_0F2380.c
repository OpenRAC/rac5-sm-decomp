extern char *D_0015B9AC;
int func_0F1AC0(int);
int func_0F1FF0(void);
void func_0BB860(void);
void func_0F2738(void *);

int func_0F2380(void *arg) {
    unsigned int result;
    if (!D_0015B9AC)
        return 0;
    if (func_0F1AC0(1))
        return 0;
    result = func_0F1FF0();
    if (result == 0xFFFFFFFFu)
        return 0;
    func_0BB860();
    func_0F2738(arg);
    *(int *)((char *)D_0015B9AC + 4) = 9;
    *(int *)((char *)D_0015B9AC + 0xC) = result;
    return 1;
}
