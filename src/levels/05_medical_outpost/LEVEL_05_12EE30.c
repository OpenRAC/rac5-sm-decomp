extern char *D_001F60CC;
int func_12E570(int);
int func_12EAA0(void);
void func_0D97C8(void);
void func_12F1E8(void *);

int func_12EE30(void *arg) {
    unsigned int result;
    if (!D_001F60CC)
        return 0;
    if (func_12E570(1))
        return 0;
    result = func_12EAA0();
    if (result == 0xFFFFFFFFu)
        return 0;
    func_0D97C8();
    func_12F1E8(arg);
    *(int *)((char *)D_001F60CC + 4) = 9;
    *(int *)((char *)D_001F60CC + 0xC) = result;
    return 1;
}
