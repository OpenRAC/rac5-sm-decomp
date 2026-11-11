extern char *D_001A815C;
int func_10EFF0(int);
int func_10F378(void);
void func_0C9DA0(void);
void func_10FB58(void *);

int func_10F830(void *arg) {
    unsigned int result;
    if (!D_001A815C)
        return 0;
    if (func_10EFF0(1))
        return 0;
    result = func_10F378();
    if (result == 0xFFFFFFFFu)
        return 0;
    func_0C9DA0();
    func_10FB58(arg);
    *(int *)((char *)D_001A815C + 4) = 13;
    *(int *)((char *)D_001A815C + 0xC) = result;
    return 1;
}
