extern char *D_001F0B4C;
int func_12BB90(int);
int func_12C0C0(void);
void func_0D84D0(void);
void func_12C808(void *);

int func_12C4E8(void *arg) {
    unsigned int result;
    if (!D_001F0B4C)
        return 0;
    if (func_12BB90(1))
        return 0;
    result = func_12C0C0();
    if (result == 0xFFFFFFFFu)
        return 0;
    func_0D84D0();
    func_12C808(arg);
    *(int *)((char *)D_001F0B4C + 4) = 13;
    *(int *)((char *)D_001F0B4C + 0xC) = result;
    return 1;
}
