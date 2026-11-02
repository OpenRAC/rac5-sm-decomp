extern char *D_001B5CDC;
int func_110118(int);
int func_1104A0(void);
void func_0CA138(void);
void func_110C80(void *);

int func_110958(void *arg) {
    unsigned int result;
    if (!D_001B5CDC)
        return 0;
    if (func_110118(1))
        return 0;
    result = func_1104A0();
    if (result == 0xFFFFFFFFu)
        return 0;
    func_0CA138();
    func_110C80(arg);
    *(int *)((char *)D_001B5CDC + 4) = 13;
    *(int *)((char *)D_001B5CDC + 0xC) = result;
    return 1;
}
