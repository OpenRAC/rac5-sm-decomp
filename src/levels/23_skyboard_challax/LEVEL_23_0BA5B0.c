extern char *func_09D150(int mode);
extern void func_125550(int, void *, void *);
extern void func_1257E8(int, int);
extern char D_001E5ED8[];
extern char *D_001C73AC;

void func_0BA5B0(void)
{
    char *value = func_09D150(0);
    func_125550(0, D_001E5ED8, value);
    func_1257E8(0, *(int *)(D_001C73AC + 0x3c) + 1);
}
