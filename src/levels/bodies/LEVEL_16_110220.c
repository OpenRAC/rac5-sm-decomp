extern char *D_001B4B5C;
int func_10FA78(int);
int func_10FE00(void);
void func_0CA860(void);
void func_1105E0(void *);

int func_110220(void *arg) {
    unsigned int result;
    if (!D_001B4B5C)
        return 0;
    if (func_10FA78(1))
        return 0;
    result = func_10FE00();
    if (result == 0xFFFFFFFFu)
        return 0;
    func_0CA860();
    func_1105E0(arg);
    *(int *)((char *)D_001B4B5C + 4) = 9;
    *(int *)((char *)D_001B4B5C + 0xC) = result;
    return 1;
}
