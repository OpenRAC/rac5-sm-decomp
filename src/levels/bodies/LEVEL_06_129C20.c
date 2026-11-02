extern char *D_001F5C4C;
int func_1292C8(int);
int func_1297F8(void);
void func_0D5B20(void);
void func_129F40(void *);

int func_129C20(void *arg) {
    unsigned int result;
    if (!D_001F5C4C)
        return 0;
    if (func_1292C8(1))
        return 0;
    result = func_1297F8();
    if (result == 0xFFFFFFFFu)
        return 0;
    func_0D5B20();
    func_129F40(arg);
    *(int *)((char *)D_001F5C4C + 4) = 13;
    *(int *)((char *)D_001F5C4C + 0xC) = result;
    return 1;
}
