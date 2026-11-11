extern char *D_001D7CCC;
int func_1286F8(int);
int func_128C28(void);
void func_0D4B88(void);
void func_129370(void *);

int func_128FB8(void *arg) {
    unsigned int result;
    if (!D_001D7CCC)
        return 0;
    if (func_1286F8(1))
        return 0;
    result = func_128C28();
    if (result == 0xFFFFFFFFu)
        return 0;
    func_0D4B88();
    func_129370(arg);
    *(int *)((char *)D_001D7CCC + 4) = 9;
    *(int *)((char *)D_001D7CCC + 0xC) = result;
    return 1;
}
