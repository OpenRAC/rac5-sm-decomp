extern char *D_001DA44C;
int func_124370(int);
int func_1248A0(void);
void func_0D2050(void);
void func_124FE8(void *);

int func_124C30(void *arg) {
    unsigned int result;
    if (!D_001DA44C)
        return 0;
    if (func_124370(1))
        return 0;
    result = func_1248A0();
    if (result == 0xFFFFFFFFu)
        return 0;
    func_0D2050();
    func_124FE8(arg);
    *(int *)((char *)D_001DA44C + 4) = 9;
    *(int *)((char *)D_001DA44C + 0xC) = result;
    return 1;
}
