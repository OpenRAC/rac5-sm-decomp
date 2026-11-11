extern char *D_0021B34C;
int func_135BF8(int);
int func_136128(void);
void func_0DD280(void);
void func_136870(void *);

int func_136550(void *arg) {
    unsigned int result;
    if (!D_0021B34C)
        return 0;
    if (func_135BF8(1))
        return 0;
    result = func_136128();
    if (result == 0xFFFFFFFFu)
        return 0;
    func_0DD280();
    func_136870(arg);
    *(int *)((char *)D_0021B34C + 4) = 13;
    *(int *)((char *)D_0021B34C + 0xC) = result;
    return 1;
}
