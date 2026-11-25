extern long long func_1315B8(void);
extern void func_1315D0(int);
extern void func_0C4540(void);
extern void func_131918(int);
extern unsigned char D_0020C551;
extern char *D_0020C62C;

void func_0C9408(void)
{
    int value = ((int (*)(void))func_1315B8)();
    func_1315D0(0);
    if (D_0020C551 != 0) {
        func_0C4540();
    }
    func_1315D0(value);
    func_131918(*(int *)(D_0020C62C + 0x3c));
}
