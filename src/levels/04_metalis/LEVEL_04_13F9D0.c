extern char *D_0022046C;
int func_13F078(int);
int func_13F5A8(void);
void func_0E0AE0(void);
void func_13FCF0(void *);

int func_13F9D0(void *arg) {
    unsigned int result;
    if (!D_0022046C)
        return 0;
    if (func_13F078(1))
        return 0;
    result = func_13F5A8();
    if (result == 0xFFFFFFFFu)
        return 0;
    func_0E0AE0();
    func_13FCF0(arg);
    *(int *)((char *)D_0022046C + 4) = 13;
    *(int *)((char *)D_0022046C + 0xC) = result;
    return 1;
}
