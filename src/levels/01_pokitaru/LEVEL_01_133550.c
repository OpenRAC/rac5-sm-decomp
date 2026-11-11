extern char *D_0020704C;
int func_132BF8(int);
int func_133128(void);
void func_0DB220(void);
void func_133870(void *);

int func_133550(void *arg) {
    unsigned int result;
    if (!D_0020704C)
        return 0;
    if (func_132BF8(1))
        return 0;
    result = func_133128();
    if (result == 0xFFFFFFFFu)
        return 0;
    func_0DB220();
    func_133870(arg);
    *(int *)((char *)D_0020704C + 4) = 13;
    *(int *)((char *)D_0020704C + 0xC) = result;
    return 1;
}
