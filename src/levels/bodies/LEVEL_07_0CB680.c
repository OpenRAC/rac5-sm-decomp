extern long long func_1361F0(void);
extern void func_136208(long long);
extern void func_0C67B8(void);
extern void func_136550(int);
extern unsigned char D_002081D1;
extern char *D_002082AC;

void func_0CB680(void)
{
    long long value = func_1361F0();
    func_136208(0);
    if (D_002081D1 != 0) {
        func_0C67B8();
    }
    func_136208(value);
    func_136550(*(int *)(D_002082AC + 0x3c));
}
