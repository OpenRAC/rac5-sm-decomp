extern char *D_0016602C;
int func_10A0C8(int);
int func_10A5F8(void);
void func_0C9760(void);
void func_10AD40(void *);

int func_10A988(void *arg) {
    unsigned int result;
    if (!D_0016602C)
        return 0;
    if (func_10A0C8(1))
        return 0;
    result = func_10A5F8();
    if (result == 0xFFFFFFFFu)
        return 0;
    func_0C9760();
    func_10AD40(arg);
    *(int *)((char *)D_0016602C + 4) = 9;
    *(int *)((char *)D_0016602C + 0xC) = result;
    return 1;
}
