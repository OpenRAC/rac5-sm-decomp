extern long long func_124968(void);
extern void func_124980(long long);
extern void func_0BB4F8(void);
extern void func_124CC8(int);
extern unsigned char D_001C72D1;
extern char *D_001C73AC;

void func_0C03C0(void)
{
    long long value = func_124968();
    func_124980(0);
    if (D_001C72D1 != 0) {
        func_0BB4F8();
    }
    func_124980(value);
    func_124CC8(*(int *)(D_001C73AC + 0x3c));
}
