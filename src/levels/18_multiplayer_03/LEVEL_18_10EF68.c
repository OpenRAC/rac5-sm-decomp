extern char *D_001B5FDC;
int func_10E728(int);
int func_10EAB0(void);
void func_0C9838(void);
void func_10F290(void *);

int func_10EF68(void *arg) {
    unsigned int result;
    if (!D_001B5FDC)
        return 0;
    if (func_10E728(1))
        return 0;
    result = func_10EAB0();
    if (result == 0xFFFFFFFFu)
        return 0;
    func_0C9838();
    func_10F290(arg);
    *(int *)((char *)D_001B5FDC + 4) = 13;
    *(int *)((char *)D_001B5FDC + 0xC) = result;
    return 1;
}
