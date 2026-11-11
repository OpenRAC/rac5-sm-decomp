extern long long func_10FEB0(void);
extern void func_10FEC8(long long);
extern void func_0B3C10(void);
extern void func_1102B8(int);
extern unsigned char D_001A19D9;
extern char *D_001A1AB4;

void func_0B8A68(void)
{
    long long value = func_10FEB0();
    func_10FEC8(0);
    if (D_001A19D9 != 0) {
        func_0B3C10();
    }
    func_10FEC8(value);
    func_1102B8(*(int *)(D_001A1AB4 + 0x3c));
}
