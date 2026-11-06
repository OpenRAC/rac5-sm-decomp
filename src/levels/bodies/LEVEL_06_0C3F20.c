extern long long func_1298C0(void);
extern void func_1298D8(long long);
extern void func_0BF058(void);
extern void func_129C20(int);
extern unsigned char D_001E2DD1;
extern char *D_001E2EAC;

void func_0C3F20(void)
{
    long long value = func_1298C0();
    func_1298D8(0);
    if (D_001E2DD1 != 0) {
        func_0BF058();
    }
    func_1298D8(value);
    func_129C20(*(int *)(D_001E2EAC + 0x3c));
}
