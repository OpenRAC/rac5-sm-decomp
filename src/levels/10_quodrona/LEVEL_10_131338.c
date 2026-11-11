extern char *D_0020FCAC;
int func_130A58(int);
int func_130F88(void);
void func_0DC660(void);
void func_1316F0(void *);

int func_131338(void *arg) {
    unsigned int result;
    if (!D_0020FCAC)
        return 0;
    if (func_130A58(1))
        return 0;
    result = func_130F88();
    if (result == 0xFFFFFFFFu)
        return 0;
    func_0DC660();
    func_1316F0(arg);
    *(int *)((char *)D_0020FCAC + 4) = 9;
    *(int *)((char *)D_0020FCAC + 0xC) = result;
    return 1;
}
