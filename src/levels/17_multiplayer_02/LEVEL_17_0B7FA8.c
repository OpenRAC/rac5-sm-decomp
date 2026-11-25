extern long long func_10F428(void);
extern void func_10F440(int);
extern void func_0B3150(void);
extern void func_10F830(int);
extern unsigned char D_00194FD9;
extern char *D_001950B4;

void func_0B7FA8(void)
{
    int value = ((int (*)(void))func_10F428)();
    func_10F440(0);
    if (D_00194FD9 != 0) {
        func_0B3150();
    }
    func_10F440(value);
    func_10F830(*(int *)(D_001950B4 + 0x3c));
}
