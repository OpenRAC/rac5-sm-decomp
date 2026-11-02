extern char *D_0024FF0C;
int func_144130(int);
int func_144660(void);
void func_0E61F0(void);
void func_144DA8(void *);

int func_1449F0(void *arg) {
    unsigned int result;
    if (!D_0024FF0C)
        return 0;
    if (func_144130(1))
        return 0;
    result = func_144660();
    if (result == 0xFFFFFFFFu)
        return 0;
    func_0E61F0();
    func_144DA8(arg);
    *(int *)((char *)D_0024FF0C + 4) = 9;
    *(int *)((char *)D_0024FF0C + 0xC) = result;
    return 1;
}
