extern char *D_0011721C;
int func_0E2860(int);
int func_0E2BE8(void);
void func_0B4D90(void);
void func_0E33C8(void *);

int func_0E3008(void *arg) {
    unsigned int result;
    if (!D_0011721C)
        return 0;
    if (func_0E2860(1))
        return 0;
    result = func_0E2BE8();
    if (result == 0xFFFFFFFFu)
        return 0;
    func_0B4D90();
    func_0E33C8(arg);
    *(int *)((char *)D_0011721C + 4) = 9;
    *(int *)((char *)D_0011721C + 0xC) = result;
    return 1;
}
